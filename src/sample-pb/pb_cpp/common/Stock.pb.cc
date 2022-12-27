// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/Stock.proto

#include "common/Stock.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Stock::Stock(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.code_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.market_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StockDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StockDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StockDefaultTypeInternal() {}
  union {
    Stock _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StockDefaultTypeInternal _Stock_default_instance_;
static ::_pb::Metadata file_level_metadata_common_2fStock_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_common_2fStock_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_common_2fStock_2eproto = nullptr;

const uint32_t TableStruct_common_2fStock_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Stock, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Stock, _impl_.code_),
  PROTOBUF_FIELD_OFFSET(::Stock, _impl_.market_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Stock)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Stock_default_instance_._instance,
};

const char descriptor_table_protodef_common_2fStock_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022common/Stock.proto\"%\n\005Stock\022\014\n\004code\030\001 "
  "\001(\t\022\016\n\006market\030\002 \001(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_common_2fStock_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_common_2fStock_2eproto = {
    false, false, 67, descriptor_table_protodef_common_2fStock_2eproto,
    "common/Stock.proto",
    &descriptor_table_common_2fStock_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_common_2fStock_2eproto::offsets,
    file_level_metadata_common_2fStock_2eproto, file_level_enum_descriptors_common_2fStock_2eproto,
    file_level_service_descriptors_common_2fStock_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_common_2fStock_2eproto_getter() {
  return &descriptor_table_common_2fStock_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_common_2fStock_2eproto(&descriptor_table_common_2fStock_2eproto);

// ===================================================================

class Stock::_Internal {
 public:
};

Stock::Stock(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Stock)
}
Stock::Stock(const Stock& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Stock* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.code_){}
    , decltype(_impl_.market_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_code().empty()) {
    _this->_impl_.code_.Set(from._internal_code(), 
      _this->GetArenaForAllocation());
  }
  _impl_.market_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.market_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_market().empty()) {
    _this->_impl_.market_.Set(from._internal_market(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:Stock)
}

inline void Stock::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.code_){}
    , decltype(_impl_.market_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.market_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.market_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Stock::~Stock() {
  // @@protoc_insertion_point(destructor:Stock)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Stock::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.code_.Destroy();
  _impl_.market_.Destroy();
}

void Stock::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Stock::Clear() {
// @@protoc_insertion_point(message_clear_start:Stock)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.code_.ClearToEmpty();
  _impl_.market_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Stock::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_code();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Stock.code"));
        } else
          goto handle_unusual;
        continue;
      // string market = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_market();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Stock.market"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Stock::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Stock)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string code = 1;
  if (!this->_internal_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Stock.code");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_code(), target);
  }

  // string market = 2;
  if (!this->_internal_market().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_market().data(), static_cast<int>(this->_internal_market().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Stock.market");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_market(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Stock)
  return target;
}

size_t Stock::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Stock)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string code = 1;
  if (!this->_internal_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string market = 2;
  if (!this->_internal_market().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_market());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Stock::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Stock::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Stock::GetClassData() const { return &_class_data_; }


void Stock::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Stock*>(&to_msg);
  auto& from = static_cast<const Stock&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Stock)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_code().empty()) {
    _this->_internal_set_code(from._internal_code());
  }
  if (!from._internal_market().empty()) {
    _this->_internal_set_market(from._internal_market());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Stock::CopyFrom(const Stock& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Stock)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Stock::IsInitialized() const {
  return true;
}

void Stock::InternalSwap(Stock* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.code_, lhs_arena,
      &other->_impl_.code_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.market_, lhs_arena,
      &other->_impl_.market_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Stock::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_common_2fStock_2eproto_getter, &descriptor_table_common_2fStock_2eproto_once,
      file_level_metadata_common_2fStock_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Stock*
Arena::CreateMaybeMessage< ::Stock >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Stock >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
