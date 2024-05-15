// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Req.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Req_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Req_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
#include "MsgType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Req_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Req_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Req_2eproto;
class PBReq;
struct PBReqDefaultTypeInternal;
extern PBReqDefaultTypeInternal _PBReq_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::PBReq* Arena::CreateMaybeMessage<::PBReq>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class PBReq final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:PBReq) */ {
 public:
  inline PBReq() : PBReq(nullptr) {}
  ~PBReq() override;
  explicit PROTOBUF_CONSTEXPR PBReq(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PBReq(const PBReq& from);
  PBReq(PBReq&& from) noexcept
    : PBReq() {
    *this = ::std::move(from);
  }

  inline PBReq& operator=(const PBReq& from) {
    CopyFrom(from);
    return *this;
  }
  inline PBReq& operator=(PBReq&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const PBReq& default_instance() {
    return *internal_default_instance();
  }
  static inline const PBReq* internal_default_instance() {
    return reinterpret_cast<const PBReq*>(
               &_PBReq_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PBReq& a, PBReq& b) {
    a.Swap(&b);
  }
  inline void Swap(PBReq* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PBReq* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PBReq* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PBReq>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PBReq& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PBReq& from) {
    PBReq::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PBReq* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "PBReq";
  }
  protected:
  explicit PBReq(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReqIdFieldNumber = 2,
    kPayloadFieldNumber = 4,
    kReqTimeFieldNumber = 3,
    kReqMsgTypeFieldNumber = 1,
  };
  // string reqId = 2;
  void clear_reqid();
  const std::string& reqid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_reqid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_reqid();
  PROTOBUF_NODISCARD std::string* release_reqid();
  void set_allocated_reqid(std::string* reqid);
  private:
  const std::string& _internal_reqid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_reqid(const std::string& value);
  std::string* _internal_mutable_reqid();
  public:

  // .google.protobuf.Any payload = 4;
  bool has_payload() const;
  private:
  bool _internal_has_payload() const;
  public:
  void clear_payload();
  const ::PROTOBUF_NAMESPACE_ID::Any& payload() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Any* release_payload();
  ::PROTOBUF_NAMESPACE_ID::Any* mutable_payload();
  void set_allocated_payload(::PROTOBUF_NAMESPACE_ID::Any* payload);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Any& _internal_payload() const;
  ::PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_payload();
  public:
  void unsafe_arena_set_allocated_payload(
      ::PROTOBUF_NAMESPACE_ID::Any* payload);
  ::PROTOBUF_NAMESPACE_ID::Any* unsafe_arena_release_payload();

  // uint64 reqTime = 3;
  void clear_reqtime();
  uint64_t reqtime() const;
  void set_reqtime(uint64_t value);
  private:
  uint64_t _internal_reqtime() const;
  void _internal_set_reqtime(uint64_t value);
  public:

  // .PBMsgType reqMsgType = 1;
  void clear_reqmsgtype();
  ::PBMsgType reqmsgtype() const;
  void set_reqmsgtype(::PBMsgType value);
  private:
  ::PBMsgType _internal_reqmsgtype() const;
  void _internal_set_reqmsgtype(::PBMsgType value);
  public:

  // @@protoc_insertion_point(class_scope:PBReq)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reqid_;
    ::PROTOBUF_NAMESPACE_ID::Any* payload_;
    uint64_t reqtime_;
    int reqmsgtype_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Req_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PBReq

// .PBMsgType reqMsgType = 1;
inline void PBReq::clear_reqmsgtype() {
  _impl_.reqmsgtype_ = 0;
}
inline ::PBMsgType PBReq::_internal_reqmsgtype() const {
  return static_cast< ::PBMsgType >(_impl_.reqmsgtype_);
}
inline ::PBMsgType PBReq::reqmsgtype() const {
  // @@protoc_insertion_point(field_get:PBReq.reqMsgType)
  return _internal_reqmsgtype();
}
inline void PBReq::_internal_set_reqmsgtype(::PBMsgType value) {
  
  _impl_.reqmsgtype_ = value;
}
inline void PBReq::set_reqmsgtype(::PBMsgType value) {
  _internal_set_reqmsgtype(value);
  // @@protoc_insertion_point(field_set:PBReq.reqMsgType)
}

// string reqId = 2;
inline void PBReq::clear_reqid() {
  _impl_.reqid_.ClearToEmpty();
}
inline const std::string& PBReq::reqid() const {
  // @@protoc_insertion_point(field_get:PBReq.reqId)
  return _internal_reqid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PBReq::set_reqid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.reqid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:PBReq.reqId)
}
inline std::string* PBReq::mutable_reqid() {
  std::string* _s = _internal_mutable_reqid();
  // @@protoc_insertion_point(field_mutable:PBReq.reqId)
  return _s;
}
inline const std::string& PBReq::_internal_reqid() const {
  return _impl_.reqid_.Get();
}
inline void PBReq::_internal_set_reqid(const std::string& value) {
  
  _impl_.reqid_.Set(value, GetArenaForAllocation());
}
inline std::string* PBReq::_internal_mutable_reqid() {
  
  return _impl_.reqid_.Mutable(GetArenaForAllocation());
}
inline std::string* PBReq::release_reqid() {
  // @@protoc_insertion_point(field_release:PBReq.reqId)
  return _impl_.reqid_.Release();
}
inline void PBReq::set_allocated_reqid(std::string* reqid) {
  if (reqid != nullptr) {
    
  } else {
    
  }
  _impl_.reqid_.SetAllocated(reqid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.reqid_.IsDefault()) {
    _impl_.reqid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:PBReq.reqId)
}

// uint64 reqTime = 3;
inline void PBReq::clear_reqtime() {
  _impl_.reqtime_ = uint64_t{0u};
}
inline uint64_t PBReq::_internal_reqtime() const {
  return _impl_.reqtime_;
}
inline uint64_t PBReq::reqtime() const {
  // @@protoc_insertion_point(field_get:PBReq.reqTime)
  return _internal_reqtime();
}
inline void PBReq::_internal_set_reqtime(uint64_t value) {
  
  _impl_.reqtime_ = value;
}
inline void PBReq::set_reqtime(uint64_t value) {
  _internal_set_reqtime(value);
  // @@protoc_insertion_point(field_set:PBReq.reqTime)
}

// .google.protobuf.Any payload = 4;
inline bool PBReq::_internal_has_payload() const {
  return this != internal_default_instance() && _impl_.payload_ != nullptr;
}
inline bool PBReq::has_payload() const {
  return _internal_has_payload();
}
inline const ::PROTOBUF_NAMESPACE_ID::Any& PBReq::_internal_payload() const {
  const ::PROTOBUF_NAMESPACE_ID::Any* p = _impl_.payload_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Any&>(
      ::PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Any& PBReq::payload() const {
  // @@protoc_insertion_point(field_get:PBReq.payload)
  return _internal_payload();
}
inline void PBReq::unsafe_arena_set_allocated_payload(
    ::PROTOBUF_NAMESPACE_ID::Any* payload) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.payload_);
  }
  _impl_.payload_ = payload;
  if (payload) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:PBReq.payload)
}
inline ::PROTOBUF_NAMESPACE_ID::Any* PBReq::release_payload() {
  
  ::PROTOBUF_NAMESPACE_ID::Any* temp = _impl_.payload_;
  _impl_.payload_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Any* PBReq::unsafe_arena_release_payload() {
  // @@protoc_insertion_point(field_release:PBReq.payload)
  
  ::PROTOBUF_NAMESPACE_ID::Any* temp = _impl_.payload_;
  _impl_.payload_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Any* PBReq::_internal_mutable_payload() {
  
  if (_impl_.payload_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Any>(GetArenaForAllocation());
    _impl_.payload_ = p;
  }
  return _impl_.payload_;
}
inline ::PROTOBUF_NAMESPACE_ID::Any* PBReq::mutable_payload() {
  ::PROTOBUF_NAMESPACE_ID::Any* _msg = _internal_mutable_payload();
  // @@protoc_insertion_point(field_mutable:PBReq.payload)
  return _msg;
}
inline void PBReq::set_allocated_payload(::PROTOBUF_NAMESPACE_ID::Any* payload) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.payload_);
  }
  if (payload) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(payload));
    if (message_arena != submessage_arena) {
      payload = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, payload, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.payload_ = payload;
  // @@protoc_insertion_point(field_set_allocated:PBReq.payload)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Req_2eproto
