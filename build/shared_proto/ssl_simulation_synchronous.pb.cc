// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_simulation_synchronous.proto

#include "ssl_simulation_synchronous.pb.h"

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

PROTOBUF_CONSTEXPR SimulationSyncRequest::SimulationSyncRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.simulator_command_)*/nullptr
  , /*decltype(_impl_.robot_control_)*/nullptr
  , /*decltype(_impl_.sim_step_)*/0} {}
struct SimulationSyncRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SimulationSyncRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SimulationSyncRequestDefaultTypeInternal() {}
  union {
    SimulationSyncRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SimulationSyncRequestDefaultTypeInternal _SimulationSyncRequest_default_instance_;
PROTOBUF_CONSTEXPR SimulationSyncResponse::SimulationSyncResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.detection_)*/{}
  , /*decltype(_impl_.robot_control_response_)*/nullptr} {}
struct SimulationSyncResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SimulationSyncResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SimulationSyncResponseDefaultTypeInternal() {}
  union {
    SimulationSyncResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SimulationSyncResponseDefaultTypeInternal _SimulationSyncResponse_default_instance_;
static ::_pb::Metadata file_level_metadata_ssl_5fsimulation_5fsynchronous_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ssl_5fsimulation_5fsynchronous_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ssl_5fsimulation_5fsynchronous_2eproto = nullptr;

const uint32_t TableStruct_ssl_5fsimulation_5fsynchronous_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::SimulationSyncRequest, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::SimulationSyncRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SimulationSyncRequest, _impl_.sim_step_),
  PROTOBUF_FIELD_OFFSET(::SimulationSyncRequest, _impl_.simulator_command_),
  PROTOBUF_FIELD_OFFSET(::SimulationSyncRequest, _impl_.robot_control_),
  2,
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::SimulationSyncResponse, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::SimulationSyncResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::SimulationSyncResponse, _impl_.detection_),
  PROTOBUF_FIELD_OFFSET(::SimulationSyncResponse, _impl_.robot_control_response_),
  ~0u,
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::SimulationSyncRequest)},
  { 12, 20, -1, sizeof(::SimulationSyncResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_SimulationSyncRequest_default_instance_._instance,
  &::_SimulationSyncResponse_default_instance_._instance,
};

const char descriptor_table_protodef_ssl_5fsimulation_5fsynchronous_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n ssl_simulation_synchronous.proto\032\032ssl_"
  "vision_detection.proto\032#ssl_simulation_r"
  "obot_feedback.proto\032\"ssl_simulation_robo"
  "t_control.proto\032\034ssl_simulation_control."
  "proto\"}\n\025SimulationSyncRequest\022\020\n\010sim_st"
  "ep\030\001 \001(\002\022,\n\021simulator_command\030\002 \001(\0132\021.Si"
  "mulatorCommand\022$\n\rrobot_control\030\003 \001(\0132\r."
  "RobotControl\"w\n\026SimulationSyncResponse\022&"
  "\n\tdetection\030\001 \003(\0132\023.SSL_DetectionFrame\0225"
  "\n\026robot_control_response\030\002 \001(\0132\025.RobotCo"
  "ntrolResponseB8Z6github.com/RoboCup-SSL/"
  "ssl-simulation-protocol/pkg/sim"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_deps[4] = {
  &::descriptor_table_ssl_5fsimulation_5fcontrol_2eproto,
  &::descriptor_table_ssl_5fsimulation_5frobot_5fcontrol_2eproto,
  &::descriptor_table_ssl_5fsimulation_5frobot_5ffeedback_2eproto,
  &::descriptor_table_ssl_5fvision_5fdetection_2eproto,
};
static ::_pbi::once_flag descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto = {
    false, false, 471, descriptor_table_protodef_ssl_5fsimulation_5fsynchronous_2eproto,
    "ssl_simulation_synchronous.proto",
    &descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_once, descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_deps, 4, 2,
    schemas, file_default_instances, TableStruct_ssl_5fsimulation_5fsynchronous_2eproto::offsets,
    file_level_metadata_ssl_5fsimulation_5fsynchronous_2eproto, file_level_enum_descriptors_ssl_5fsimulation_5fsynchronous_2eproto,
    file_level_service_descriptors_ssl_5fsimulation_5fsynchronous_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_getter() {
  return &descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ssl_5fsimulation_5fsynchronous_2eproto(&descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto);

// ===================================================================

class SimulationSyncRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<SimulationSyncRequest>()._impl_._has_bits_);
  static void set_has_sim_step(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::SimulatorCommand& simulator_command(const SimulationSyncRequest* msg);
  static void set_has_simulator_command(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::RobotControl& robot_control(const SimulationSyncRequest* msg);
  static void set_has_robot_control(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::SimulatorCommand&
SimulationSyncRequest::_Internal::simulator_command(const SimulationSyncRequest* msg) {
  return *msg->_impl_.simulator_command_;
}
const ::RobotControl&
SimulationSyncRequest::_Internal::robot_control(const SimulationSyncRequest* msg) {
  return *msg->_impl_.robot_control_;
}
void SimulationSyncRequest::clear_simulator_command() {
  if (_impl_.simulator_command_ != nullptr) _impl_.simulator_command_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
void SimulationSyncRequest::clear_robot_control() {
  if (_impl_.robot_control_ != nullptr) _impl_.robot_control_->Clear();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
SimulationSyncRequest::SimulationSyncRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SimulationSyncRequest)
}
SimulationSyncRequest::SimulationSyncRequest(const SimulationSyncRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SimulationSyncRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.simulator_command_){nullptr}
    , decltype(_impl_.robot_control_){nullptr}
    , decltype(_impl_.sim_step_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_simulator_command()) {
    _this->_impl_.simulator_command_ = new ::SimulatorCommand(*from._impl_.simulator_command_);
  }
  if (from._internal_has_robot_control()) {
    _this->_impl_.robot_control_ = new ::RobotControl(*from._impl_.robot_control_);
  }
  _this->_impl_.sim_step_ = from._impl_.sim_step_;
  // @@protoc_insertion_point(copy_constructor:SimulationSyncRequest)
}

inline void SimulationSyncRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.simulator_command_){nullptr}
    , decltype(_impl_.robot_control_){nullptr}
    , decltype(_impl_.sim_step_){0}
  };
}

SimulationSyncRequest::~SimulationSyncRequest() {
  // @@protoc_insertion_point(destructor:SimulationSyncRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SimulationSyncRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.simulator_command_;
  if (this != internal_default_instance()) delete _impl_.robot_control_;
}

void SimulationSyncRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SimulationSyncRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:SimulationSyncRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(_impl_.simulator_command_ != nullptr);
      _impl_.simulator_command_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(_impl_.robot_control_ != nullptr);
      _impl_.robot_control_->Clear();
    }
  }
  _impl_.sim_step_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SimulationSyncRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional float sim_step = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _Internal::set_has_sim_step(&has_bits);
          _impl_.sim_step_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // optional .SimulatorCommand simulator_command = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_simulator_command(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .RobotControl robot_control = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_robot_control(), ptr);
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

uint8_t* SimulationSyncRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SimulationSyncRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional float sim_step = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_sim_step(), target);
  }

  // optional .SimulatorCommand simulator_command = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::simulator_command(this),
        _Internal::simulator_command(this).GetCachedSize(), target, stream);
  }

  // optional .RobotControl robot_control = 3;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::robot_control(this),
        _Internal::robot_control(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SimulationSyncRequest)
  return target;
}

size_t SimulationSyncRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SimulationSyncRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional .SimulatorCommand simulator_command = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.simulator_command_);
    }

    // optional .RobotControl robot_control = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.robot_control_);
    }

    // optional float sim_step = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 4;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SimulationSyncRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SimulationSyncRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SimulationSyncRequest::GetClassData() const { return &_class_data_; }


void SimulationSyncRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SimulationSyncRequest*>(&to_msg);
  auto& from = static_cast<const SimulationSyncRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SimulationSyncRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_simulator_command()->::SimulatorCommand::MergeFrom(
          from._internal_simulator_command());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_mutable_robot_control()->::RobotControl::MergeFrom(
          from._internal_robot_control());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.sim_step_ = from._impl_.sim_step_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SimulationSyncRequest::CopyFrom(const SimulationSyncRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SimulationSyncRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimulationSyncRequest::IsInitialized() const {
  if (_internal_has_simulator_command()) {
    if (!_impl_.simulator_command_->IsInitialized()) return false;
  }
  if (_internal_has_robot_control()) {
    if (!_impl_.robot_control_->IsInitialized()) return false;
  }
  return true;
}

void SimulationSyncRequest::InternalSwap(SimulationSyncRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SimulationSyncRequest, _impl_.sim_step_)
      + sizeof(SimulationSyncRequest::_impl_.sim_step_)
      - PROTOBUF_FIELD_OFFSET(SimulationSyncRequest, _impl_.simulator_command_)>(
          reinterpret_cast<char*>(&_impl_.simulator_command_),
          reinterpret_cast<char*>(&other->_impl_.simulator_command_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SimulationSyncRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_getter, &descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_once,
      file_level_metadata_ssl_5fsimulation_5fsynchronous_2eproto[0]);
}

// ===================================================================

class SimulationSyncResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<SimulationSyncResponse>()._impl_._has_bits_);
  static const ::RobotControlResponse& robot_control_response(const SimulationSyncResponse* msg);
  static void set_has_robot_control_response(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::RobotControlResponse&
SimulationSyncResponse::_Internal::robot_control_response(const SimulationSyncResponse* msg) {
  return *msg->_impl_.robot_control_response_;
}
void SimulationSyncResponse::clear_detection() {
  _impl_.detection_.Clear();
}
void SimulationSyncResponse::clear_robot_control_response() {
  if (_impl_.robot_control_response_ != nullptr) _impl_.robot_control_response_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
SimulationSyncResponse::SimulationSyncResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:SimulationSyncResponse)
}
SimulationSyncResponse::SimulationSyncResponse(const SimulationSyncResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SimulationSyncResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.detection_){from._impl_.detection_}
    , decltype(_impl_.robot_control_response_){nullptr}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_robot_control_response()) {
    _this->_impl_.robot_control_response_ = new ::RobotControlResponse(*from._impl_.robot_control_response_);
  }
  // @@protoc_insertion_point(copy_constructor:SimulationSyncResponse)
}

inline void SimulationSyncResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.detection_){arena}
    , decltype(_impl_.robot_control_response_){nullptr}
  };
}

SimulationSyncResponse::~SimulationSyncResponse() {
  // @@protoc_insertion_point(destructor:SimulationSyncResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SimulationSyncResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.detection_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.robot_control_response_;
}

void SimulationSyncResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SimulationSyncResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:SimulationSyncResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.detection_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(_impl_.robot_control_response_ != nullptr);
    _impl_.robot_control_response_->Clear();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SimulationSyncResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .SSL_DetectionFrame detection = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_detection(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional .RobotControlResponse robot_control_response = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_robot_control_response(), ptr);
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

uint8_t* SimulationSyncResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:SimulationSyncResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .SSL_DetectionFrame detection = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_detection_size()); i < n; i++) {
    const auto& repfield = this->_internal_detection(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional .RobotControlResponse robot_control_response = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::robot_control_response(this),
        _Internal::robot_control_response(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SimulationSyncResponse)
  return target;
}

size_t SimulationSyncResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SimulationSyncResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .SSL_DetectionFrame detection = 1;
  total_size += 1UL * this->_internal_detection_size();
  for (const auto& msg : this->_impl_.detection_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional .RobotControlResponse robot_control_response = 2;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.robot_control_response_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SimulationSyncResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SimulationSyncResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SimulationSyncResponse::GetClassData() const { return &_class_data_; }


void SimulationSyncResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SimulationSyncResponse*>(&to_msg);
  auto& from = static_cast<const SimulationSyncResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:SimulationSyncResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.detection_.MergeFrom(from._impl_.detection_);
  if (from._internal_has_robot_control_response()) {
    _this->_internal_mutable_robot_control_response()->::RobotControlResponse::MergeFrom(
        from._internal_robot_control_response());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SimulationSyncResponse::CopyFrom(const SimulationSyncResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SimulationSyncResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimulationSyncResponse::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(_impl_.detection_))
    return false;
  if (_internal_has_robot_control_response()) {
    if (!_impl_.robot_control_response_->IsInitialized()) return false;
  }
  return true;
}

void SimulationSyncResponse::InternalSwap(SimulationSyncResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.detection_.InternalSwap(&other->_impl_.detection_);
  swap(_impl_.robot_control_response_, other->_impl_.robot_control_response_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SimulationSyncResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_getter, &descriptor_table_ssl_5fsimulation_5fsynchronous_2eproto_once,
      file_level_metadata_ssl_5fsimulation_5fsynchronous_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::SimulationSyncRequest*
Arena::CreateMaybeMessage< ::SimulationSyncRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SimulationSyncRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::SimulationSyncResponse*
Arena::CreateMaybeMessage< ::SimulationSyncResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::SimulationSyncResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
