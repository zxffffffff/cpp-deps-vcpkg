// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: notify/QuotePushTickNotify.proto

#include "notify/QuotePushTickNotify.pb.h"

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

namespace Quote {
PROTOBUF_CONSTEXPR PushTickItem::PushTickItem(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.price_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.chg_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.chgpercent_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.bid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.ask_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.stock_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PushTickItemDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PushTickItemDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PushTickItemDefaultTypeInternal() {}
  union {
    PushTickItem _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PushTickItemDefaultTypeInternal _PushTickItem_default_instance_;
PROTOBUF_CONSTEXPR PushTickNotify::PushTickNotify(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.ticklist_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PushTickNotifyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PushTickNotifyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PushTickNotifyDefaultTypeInternal() {}
  union {
    PushTickNotify _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PushTickNotifyDefaultTypeInternal _PushTickNotify_default_instance_;
}  // namespace Quote
static ::_pb::Metadata file_level_metadata_notify_2fQuotePushTickNotify_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_notify_2fQuotePushTickNotify_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_notify_2fQuotePushTickNotify_2eproto = nullptr;

const uint32_t TableStruct_notify_2fQuotePushTickNotify_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickItem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickItem, _impl_.stock_),
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickItem, _impl_.price_),
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickItem, _impl_.chg_),
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickItem, _impl_.chgpercent_),
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickItem, _impl_.bid_),
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickItem, _impl_.ask_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickNotify, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Quote::PushTickNotify, _impl_.ticklist_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Quote::PushTickItem)},
  { 12, -1, -1, sizeof(::Quote::PushTickNotify)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::Quote::_PushTickItem_default_instance_._instance,
  &::Quote::_PushTickNotify_default_instance_._instance,
};

const char descriptor_table_protodef_notify_2fQuotePushTickNotify_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n notify/QuotePushTickNotify.proto\022\005Quot"
  "e\032\022common/Stock.proto\"o\n\014PushTickItem\022\025\n"
  "\005stock\030\001 \001(\0132\006.Stock\022\r\n\005price\030\002 \001(\t\022\013\n\003c"
  "hg\030\003 \001(\t\022\022\n\nchgPercent\030\004 \001(\t\022\013\n\003bid\030\005 \001("
  "\t\022\013\n\003ask\030\006 \001(\t\"7\n\016PushTickNotify\022%\n\010tick"
  "List\030\001 \003(\0132\023.Quote.PushTickItemb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_notify_2fQuotePushTickNotify_2eproto_deps[1] = {
  &::descriptor_table_common_2fStock_2eproto,
};
static ::_pbi::once_flag descriptor_table_notify_2fQuotePushTickNotify_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_notify_2fQuotePushTickNotify_2eproto = {
    false, false, 239, descriptor_table_protodef_notify_2fQuotePushTickNotify_2eproto,
    "notify/QuotePushTickNotify.proto",
    &descriptor_table_notify_2fQuotePushTickNotify_2eproto_once, descriptor_table_notify_2fQuotePushTickNotify_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_notify_2fQuotePushTickNotify_2eproto::offsets,
    file_level_metadata_notify_2fQuotePushTickNotify_2eproto, file_level_enum_descriptors_notify_2fQuotePushTickNotify_2eproto,
    file_level_service_descriptors_notify_2fQuotePushTickNotify_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_notify_2fQuotePushTickNotify_2eproto_getter() {
  return &descriptor_table_notify_2fQuotePushTickNotify_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_notify_2fQuotePushTickNotify_2eproto(&descriptor_table_notify_2fQuotePushTickNotify_2eproto);
namespace Quote {

// ===================================================================

class PushTickItem::_Internal {
 public:
  static const ::Stock& stock(const PushTickItem* msg);
};

const ::Stock&
PushTickItem::_Internal::stock(const PushTickItem* msg) {
  return *msg->_impl_.stock_;
}
void PushTickItem::clear_stock() {
  if (GetArenaForAllocation() == nullptr && _impl_.stock_ != nullptr) {
    delete _impl_.stock_;
  }
  _impl_.stock_ = nullptr;
}
PushTickItem::PushTickItem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Quote.PushTickItem)
}
PushTickItem::PushTickItem(const PushTickItem& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PushTickItem* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.price_){}
    , decltype(_impl_.chg_){}
    , decltype(_impl_.chgpercent_){}
    , decltype(_impl_.bid_){}
    , decltype(_impl_.ask_){}
    , decltype(_impl_.stock_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.price_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.price_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_price().empty()) {
    _this->_impl_.price_.Set(from._internal_price(), 
      _this->GetArenaForAllocation());
  }
  _impl_.chg_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.chg_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_chg().empty()) {
    _this->_impl_.chg_.Set(from._internal_chg(), 
      _this->GetArenaForAllocation());
  }
  _impl_.chgpercent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.chgpercent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_chgpercent().empty()) {
    _this->_impl_.chgpercent_.Set(from._internal_chgpercent(), 
      _this->GetArenaForAllocation());
  }
  _impl_.bid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.bid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_bid().empty()) {
    _this->_impl_.bid_.Set(from._internal_bid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.ask_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ask_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_ask().empty()) {
    _this->_impl_.ask_.Set(from._internal_ask(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_stock()) {
    _this->_impl_.stock_ = new ::Stock(*from._impl_.stock_);
  }
  // @@protoc_insertion_point(copy_constructor:Quote.PushTickItem)
}

inline void PushTickItem::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.price_){}
    , decltype(_impl_.chg_){}
    , decltype(_impl_.chgpercent_){}
    , decltype(_impl_.bid_){}
    , decltype(_impl_.ask_){}
    , decltype(_impl_.stock_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.price_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.price_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.chg_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.chg_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.chgpercent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.chgpercent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.bid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.bid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.ask_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.ask_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PushTickItem::~PushTickItem() {
  // @@protoc_insertion_point(destructor:Quote.PushTickItem)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PushTickItem::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.price_.Destroy();
  _impl_.chg_.Destroy();
  _impl_.chgpercent_.Destroy();
  _impl_.bid_.Destroy();
  _impl_.ask_.Destroy();
  if (this != internal_default_instance()) delete _impl_.stock_;
}

void PushTickItem::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PushTickItem::Clear() {
// @@protoc_insertion_point(message_clear_start:Quote.PushTickItem)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.price_.ClearToEmpty();
  _impl_.chg_.ClearToEmpty();
  _impl_.chgpercent_.ClearToEmpty();
  _impl_.bid_.ClearToEmpty();
  _impl_.ask_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.stock_ != nullptr) {
    delete _impl_.stock_;
  }
  _impl_.stock_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PushTickItem::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .Stock stock = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_stock(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string price = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_price();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Quote.PushTickItem.price"));
        } else
          goto handle_unusual;
        continue;
      // string chg = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_chg();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Quote.PushTickItem.chg"));
        } else
          goto handle_unusual;
        continue;
      // string chgPercent = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_chgpercent();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Quote.PushTickItem.chgPercent"));
        } else
          goto handle_unusual;
        continue;
      // string bid = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_bid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Quote.PushTickItem.bid"));
        } else
          goto handle_unusual;
        continue;
      // string ask = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_ask();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Quote.PushTickItem.ask"));
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

uint8_t* PushTickItem::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Quote.PushTickItem)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .Stock stock = 1;
  if (this->_internal_has_stock()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::stock(this),
        _Internal::stock(this).GetCachedSize(), target, stream);
  }

  // string price = 2;
  if (!this->_internal_price().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_price().data(), static_cast<int>(this->_internal_price().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Quote.PushTickItem.price");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_price(), target);
  }

  // string chg = 3;
  if (!this->_internal_chg().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_chg().data(), static_cast<int>(this->_internal_chg().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Quote.PushTickItem.chg");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_chg(), target);
  }

  // string chgPercent = 4;
  if (!this->_internal_chgpercent().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_chgpercent().data(), static_cast<int>(this->_internal_chgpercent().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Quote.PushTickItem.chgPercent");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_chgpercent(), target);
  }

  // string bid = 5;
  if (!this->_internal_bid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_bid().data(), static_cast<int>(this->_internal_bid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Quote.PushTickItem.bid");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_bid(), target);
  }

  // string ask = 6;
  if (!this->_internal_ask().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_ask().data(), static_cast<int>(this->_internal_ask().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Quote.PushTickItem.ask");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_ask(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Quote.PushTickItem)
  return target;
}

size_t PushTickItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Quote.PushTickItem)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string price = 2;
  if (!this->_internal_price().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_price());
  }

  // string chg = 3;
  if (!this->_internal_chg().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_chg());
  }

  // string chgPercent = 4;
  if (!this->_internal_chgpercent().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_chgpercent());
  }

  // string bid = 5;
  if (!this->_internal_bid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_bid());
  }

  // string ask = 6;
  if (!this->_internal_ask().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_ask());
  }

  // .Stock stock = 1;
  if (this->_internal_has_stock()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.stock_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PushTickItem::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PushTickItem::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PushTickItem::GetClassData() const { return &_class_data_; }


void PushTickItem::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PushTickItem*>(&to_msg);
  auto& from = static_cast<const PushTickItem&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Quote.PushTickItem)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_price().empty()) {
    _this->_internal_set_price(from._internal_price());
  }
  if (!from._internal_chg().empty()) {
    _this->_internal_set_chg(from._internal_chg());
  }
  if (!from._internal_chgpercent().empty()) {
    _this->_internal_set_chgpercent(from._internal_chgpercent());
  }
  if (!from._internal_bid().empty()) {
    _this->_internal_set_bid(from._internal_bid());
  }
  if (!from._internal_ask().empty()) {
    _this->_internal_set_ask(from._internal_ask());
  }
  if (from._internal_has_stock()) {
    _this->_internal_mutable_stock()->::Stock::MergeFrom(
        from._internal_stock());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PushTickItem::CopyFrom(const PushTickItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Quote.PushTickItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PushTickItem::IsInitialized() const {
  return true;
}

void PushTickItem::InternalSwap(PushTickItem* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.price_, lhs_arena,
      &other->_impl_.price_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.chg_, lhs_arena,
      &other->_impl_.chg_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.chgpercent_, lhs_arena,
      &other->_impl_.chgpercent_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.bid_, lhs_arena,
      &other->_impl_.bid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.ask_, lhs_arena,
      &other->_impl_.ask_, rhs_arena
  );
  swap(_impl_.stock_, other->_impl_.stock_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PushTickItem::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_notify_2fQuotePushTickNotify_2eproto_getter, &descriptor_table_notify_2fQuotePushTickNotify_2eproto_once,
      file_level_metadata_notify_2fQuotePushTickNotify_2eproto[0]);
}

// ===================================================================

class PushTickNotify::_Internal {
 public:
};

PushTickNotify::PushTickNotify(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Quote.PushTickNotify)
}
PushTickNotify::PushTickNotify(const PushTickNotify& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PushTickNotify* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.ticklist_){from._impl_.ticklist_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Quote.PushTickNotify)
}

inline void PushTickNotify::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.ticklist_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

PushTickNotify::~PushTickNotify() {
  // @@protoc_insertion_point(destructor:Quote.PushTickNotify)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PushTickNotify::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.ticklist_.~RepeatedPtrField();
}

void PushTickNotify::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PushTickNotify::Clear() {
// @@protoc_insertion_point(message_clear_start:Quote.PushTickNotify)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.ticklist_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PushTickNotify::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Quote.PushTickItem tickList = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_ticklist(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* PushTickNotify::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Quote.PushTickNotify)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Quote.PushTickItem tickList = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_ticklist_size()); i < n; i++) {
    const auto& repfield = this->_internal_ticklist(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Quote.PushTickNotify)
  return target;
}

size_t PushTickNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Quote.PushTickNotify)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Quote.PushTickItem tickList = 1;
  total_size += 1UL * this->_internal_ticklist_size();
  for (const auto& msg : this->_impl_.ticklist_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PushTickNotify::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PushTickNotify::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PushTickNotify::GetClassData() const { return &_class_data_; }


void PushTickNotify::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PushTickNotify*>(&to_msg);
  auto& from = static_cast<const PushTickNotify&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Quote.PushTickNotify)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.ticklist_.MergeFrom(from._impl_.ticklist_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PushTickNotify::CopyFrom(const PushTickNotify& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Quote.PushTickNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PushTickNotify::IsInitialized() const {
  return true;
}

void PushTickNotify::InternalSwap(PushTickNotify* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.ticklist_.InternalSwap(&other->_impl_.ticklist_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PushTickNotify::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_notify_2fQuotePushTickNotify_2eproto_getter, &descriptor_table_notify_2fQuotePushTickNotify_2eproto_once,
      file_level_metadata_notify_2fQuotePushTickNotify_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Quote
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Quote::PushTickItem*
Arena::CreateMaybeMessage< ::Quote::PushTickItem >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Quote::PushTickItem >(arena);
}
template<> PROTOBUF_NOINLINE ::Quote::PushTickNotify*
Arena::CreateMaybeMessage< ::Quote::PushTickNotify >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Quote::PushTickNotify >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
