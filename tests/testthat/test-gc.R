test_that("gc works", {
  L <- new(LuaState)
  expect_equal(L$gc(2), 0)
  expect_equal(L$gc(3), 3)
  expect_equal(L$gc(4), 555)
})
