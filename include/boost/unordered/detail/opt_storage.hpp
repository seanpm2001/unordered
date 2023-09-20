#ifndef BOOST_UNORDERED_DETAIL_OPT_STORAGE_HPP
#define BOOST_UNORDERED_DETAIL_OPT_STORAGE_HPP

#include <boost/config.hpp>
#include <boost/core/addressof.hpp>

namespace boost {
  namespace unordered {
    namespace detail {
      template <class T> union opt_storage
      {
        BOOST_ATTRIBUTE_NO_UNIQUE_ADDRESS T t_;

        opt_storage() {}
        ~opt_storage() {}

        T* address() noexcept { return boost::addressof(t_); }
        T const* address() const noexcept { return boost::addressof(t_); }
      };
    } // namespace detail
  } // namespace unordered
} // namespace boost

#endif // BOOST_UNORDERED_DETAIL_OPT_STORAGE_HPP