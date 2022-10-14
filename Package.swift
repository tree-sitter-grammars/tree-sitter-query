// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "TreeSitterQuery",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterQuery", targets: ["TreeSitterQuery"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterQuery",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "corpus",
                    "grammar.js",
                    "LICENSE",
                    "Makefile",
                    "package.json",
                    "package-lock.json",
                    "README.md",
                    "scripts",
                    "src/grammar.json",
                    "src/node-types.json",
                ],
                sources: [
                    "src/parser.c",
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
