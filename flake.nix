{
  description = "AtCoder development environment";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};

        atcoder-cli = pkgs.buildNpmPackage {
          pname = "atcoder-cli";
          version = "2.2.0";

          src = pkgs.fetchFromGitHub {
            owner = "Tatamo";
            repo = "atcoder-cli";
            rev = "f385e71ba270716f5a94e3ed9bd23a24f78799d0";
            hash = "sha256-7pbCTgWt+khKVyMV03HanvuOX2uAC0PL9OLmqly7IWE=";
          };

          npmDepsHash = "sha256-ufG7Fq5D2SOzUp8KYRYUB5tYJYoADuhK+2zDfG0a3ks=";

          NODE_OPTIONS = "--openssl-legacy-provider";
        };
      in
      {
        devShells.default = pkgs.mkShell {
          buildInputs = with pkgs; [
            gcc
            python3Packages.online-judge-tools
            atcoder-cli
          ];
        };
      });
}
