// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterQuery",
    products: [
        .library(name: "TreeSitterQuery", targets: ["TreeSitterQuery"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterQuery",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterQueryTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterQuery",
            ],
            path: "bindings/swift/TreeSitterQueryTests"
        )
    ],
    cLanguageStandard: .c11
)
