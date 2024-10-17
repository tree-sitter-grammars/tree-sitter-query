import XCTest
import SwiftTreeSitter
import TreeSitterQuery

final class TreeSitterQueryTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_query())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Query grammar")
    }
}
