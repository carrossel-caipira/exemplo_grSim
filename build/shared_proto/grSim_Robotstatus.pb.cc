// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Robotstatus.proto

#include "grSim_Robotstatus.pb.h"

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

PROTOBUF_CONSTEXPR Robots_Status::Robots_Status(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.robots_status_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct Robots_StatusDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Robots_StatusDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Robots_StatusDefaultTypeInternal() {}
  union {
    Robots_Status _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Robots_StatusDefaultTypeInternal _Robots_Status_default_instance_;
PROTOBUF_CONSTEXPR Robot_Status::Robot_Status(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.robot_id_)*/0
  , /*decltype(_impl_.infrared_)*/false
  , /*decltype(_impl_.flat_kick_)*/false
  , /*decltype(_impl_.chip_kick_)*/false} {}
struct Robot_StatusDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Robot_StatusDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Robot_StatusDefaultTypeInternal() {}
  union {
    Robot_Status _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Robot_StatusDefaultTypeInternal _Robot_Status_default_instance_;
static ::_pb::Metadata file_level_metadata_grSim_5fRobotstatus_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_grSim_5fRobotstatus_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_grSim_5fRobotstatus_2eproto = nullptr;

const uint32_t TableStruct_grSim_5fRobotstatus_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Robots_Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Robots_Status, _impl_.robots_status_),
  PROTOBUF_FIELD_OFFSET(::Robot_Status, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::Robot_Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Robot_Status, _impl_.robot_id_),
  PROTOBUF_FIELD_OFFSET(::Robot_Status, _impl_.infrared_),
  PROTOBUF_FIELD_OFFSET(::Robot_Status, _impl_.flat_kick_),
  PROTOBUF_FIELD_OFFSET(::Robot_Status, _impl_.chip_kick_),
  0,
  1,
  2,
  3,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Robots_Status)},
  { 7, 17, -1, sizeof(::Robot_Status)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Robots_Status_default_instance_._instance,
  &::_Robot_Status_default_instance_._instance,
};

const char descriptor_table_protodef_grSim_5fRobotstatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027grSim_Robotstatus.proto\"5\n\rRobots_Stat"
  "us\022$\n\rrobots_status\030\001 \003(\0132\r.Robot_Status"
  "\"X\n\014Robot_Status\022\020\n\010robot_id\030\001 \002(\005\022\020\n\010in"
  "frared\030\002 \002(\010\022\021\n\tflat_kick\030\003 \002(\010\022\021\n\tchip_"
  "kick\030\004 \002(\010"
  ;
static ::_pbi::once_flag descriptor_table_grSim_5fRobotstatus_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_grSim_5fRobotstatus_2eproto = {
    false, false, 170, descriptor_table_protodef_grSim_5fRobotstatus_2eproto,
    "grSim_Robotstatus.proto",
    &descriptor_table_grSim_5fRobotstatus_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_grSim_5fRobotstatus_2eproto::offsets,
    file_level_metadata_grSim_5fRobotstatus_2eproto, file_level_enum_descriptors_grSim_5fRobotstatus_2eproto,
    file_level_service_descriptors_grSim_5fRobotstatus_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_grSim_5fRobotstatus_2eproto_getter() {
  return &descriptor_table_grSim_5fRobotstatus_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_grSim_5fRobotstatus_2eproto(&descriptor_table_grSim_5fRobotstatus_2eproto);

// ===================================================================

class Robots_Status::_Internal {
 public:
};

Robots_Status::Robots_Status(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Robots_Status)
}
Robots_Status::Robots_Status(const Robots_Status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Robots_Status* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.robots_status_){from._impl_.robots_status_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:Robots_Status)
}

inline void Robots_Status::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.robots_status_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Robots_Status::~Robots_Status() {
  // @@protoc_insertion_point(destructor:Robots_Status)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Robots_Status::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.robots_status_.~RepeatedPtrField();
}

void Robots_Status::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Robots_Status::Clear() {
// @@protoc_insertion_point(message_clear_start:Robots_Status)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.robots_status_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Robots_Status::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .Robot_Status robots_status = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_robots_status(), ptr);
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

uint8_t* Robots_Status::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Robots_Status)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .Robot_Status robots_status = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_robots_status_size()); i < n; i++) {
    const auto& repfield = this->_internal_robots_status(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Robots_Status)
  return target;
}

size_t Robots_Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Robots_Status)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .Robot_Status robots_status = 1;
  total_size += 1UL * this->_internal_robots_status_size();
  for (const auto& msg : this->_impl_.robots_status_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Robots_Status::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Robots_Status::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Robots_Status::GetClassData() const { return &_class_data_; }


void Robots_Status::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Robots_Status*>(&to_msg);
  auto& from = static_cast<const Robots_Status&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Robots_Status)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.robots_status_.MergeFrom(from._impl_.robots_status_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Robots_Status::CopyFrom(const Robots_Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Robots_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Robots_Status::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(_impl_.robots_status_))
    return false;
  return true;
}

void Robots_Status::InternalSwap(Robots_Status* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.robots_status_.InternalSwap(&other->_impl_.robots_status_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Robots_Status::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grSim_5fRobotstatus_2eproto_getter, &descriptor_table_grSim_5fRobotstatus_2eproto_once,
      file_level_metadata_grSim_5fRobotstatus_2eproto[0]);
}

// ===================================================================

class Robot_Status::_Internal {
 public:
  using HasBits = decltype(std::declval<Robot_Status>()._impl_._has_bits_);
  static void set_has_robot_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_infrared(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_flat_kick(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_chip_kick(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000f) ^ 0x0000000f) != 0;
  }
};

Robot_Status::Robot_Status(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Robot_Status)
}
Robot_Status::Robot_Status(const Robot_Status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Robot_Status* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.robot_id_){}
    , decltype(_impl_.infrared_){}
    , decltype(_impl_.flat_kick_){}
    , decltype(_impl_.chip_kick_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.robot_id_, &from._impl_.robot_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.chip_kick_) -
    reinterpret_cast<char*>(&_impl_.robot_id_)) + sizeof(_impl_.chip_kick_));
  // @@protoc_insertion_point(copy_constructor:Robot_Status)
}

inline void Robot_Status::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.robot_id_){0}
    , decltype(_impl_.infrared_){false}
    , decltype(_impl_.flat_kick_){false}
    , decltype(_impl_.chip_kick_){false}
  };
}

Robot_Status::~Robot_Status() {
  // @@protoc_insertion_point(destructor:Robot_Status)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Robot_Status::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Robot_Status::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Robot_Status::Clear() {
// @@protoc_insertion_point(message_clear_start:Robot_Status)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&_impl_.robot_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.chip_kick_) -
        reinterpret_cast<char*>(&_impl_.robot_id_)) + sizeof(_impl_.chip_kick_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Robot_Status::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 robot_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_robot_id(&has_bits);
          _impl_.robot_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required bool infrared = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_infrared(&has_bits);
          _impl_.infrared_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required bool flat_kick = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_flat_kick(&has_bits);
          _impl_.flat_kick_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required bool chip_kick = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_chip_kick(&has_bits);
          _impl_.chip_kick_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Robot_Status::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Robot_Status)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required int32 robot_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_robot_id(), target);
  }

  // required bool infrared = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_infrared(), target);
  }

  // required bool flat_kick = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_flat_kick(), target);
  }

  // required bool chip_kick = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_chip_kick(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Robot_Status)
  return target;
}

size_t Robot_Status::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Robot_Status)
  size_t total_size = 0;

  if (_internal_has_robot_id()) {
    // required int32 robot_id = 1;
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_robot_id());
  }

  if (_internal_has_infrared()) {
    // required bool infrared = 2;
    total_size += 1 + 1;
  }

  if (_internal_has_flat_kick()) {
    // required bool flat_kick = 3;
    total_size += 1 + 1;
  }

  if (_internal_has_chip_kick()) {
    // required bool chip_kick = 4;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t Robot_Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Robot_Status)
  size_t total_size = 0;

  if (((_impl_._has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required int32 robot_id = 1;
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_robot_id());

    // required bool infrared = 2;
    total_size += 1 + 1;

    // required bool flat_kick = 3;
    total_size += 1 + 1;

    // required bool chip_kick = 4;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Robot_Status::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Robot_Status::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Robot_Status::GetClassData() const { return &_class_data_; }


void Robot_Status::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Robot_Status*>(&to_msg);
  auto& from = static_cast<const Robot_Status&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Robot_Status)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.robot_id_ = from._impl_.robot_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.infrared_ = from._impl_.infrared_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.flat_kick_ = from._impl_.flat_kick_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.chip_kick_ = from._impl_.chip_kick_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Robot_Status::CopyFrom(const Robot_Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Robot_Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Robot_Status::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void Robot_Status::InternalSwap(Robot_Status* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Robot_Status, _impl_.chip_kick_)
      + sizeof(Robot_Status::_impl_.chip_kick_)
      - PROTOBUF_FIELD_OFFSET(Robot_Status, _impl_.robot_id_)>(
          reinterpret_cast<char*>(&_impl_.robot_id_),
          reinterpret_cast<char*>(&other->_impl_.robot_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Robot_Status::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_grSim_5fRobotstatus_2eproto_getter, &descriptor_table_grSim_5fRobotstatus_2eproto_once,
      file_level_metadata_grSim_5fRobotstatus_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Robots_Status*
Arena::CreateMaybeMessage< ::Robots_Status >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Robots_Status >(arena);
}
template<> PROTOBUF_NOINLINE ::Robot_Status*
Arena::CreateMaybeMessage< ::Robot_Status >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Robot_Status >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
