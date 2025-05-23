// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Packet.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grSim_5fPacket_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grSim_5fPacket_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021010 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "grSim_Commands.pb.h"
#include "grSim_Replacement.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_grSim_5fPacket_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grSim_5fPacket_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grSim_5fPacket_2eproto;
class grSim_Packet;
struct grSim_PacketDefaultTypeInternal;
extern grSim_PacketDefaultTypeInternal _grSim_Packet_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::grSim_Packet* Arena::CreateMaybeMessage<::grSim_Packet>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class grSim_Packet final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grSim_Packet) */ {
 public:
  inline grSim_Packet() : grSim_Packet(nullptr) {}
  ~grSim_Packet() override;
  explicit PROTOBUF_CONSTEXPR grSim_Packet(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  grSim_Packet(const grSim_Packet& from);
  grSim_Packet(grSim_Packet&& from) noexcept
    : grSim_Packet() {
    *this = ::std::move(from);
  }

  inline grSim_Packet& operator=(const grSim_Packet& from) {
    CopyFrom(from);
    return *this;
  }
  inline grSim_Packet& operator=(grSim_Packet&& from) noexcept {
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

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const grSim_Packet& default_instance() {
    return *internal_default_instance();
  }
  static inline const grSim_Packet* internal_default_instance() {
    return reinterpret_cast<const grSim_Packet*>(
               &_grSim_Packet_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(grSim_Packet& a, grSim_Packet& b) {
    a.Swap(&b);
  }
  inline void Swap(grSim_Packet* other) {
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
  void UnsafeArenaSwap(grSim_Packet* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  grSim_Packet* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<grSim_Packet>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const grSim_Packet& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const grSim_Packet& from) {
    grSim_Packet::MergeImpl(*this, from);
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
  void InternalSwap(grSim_Packet* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grSim_Packet";
  }
  protected:
  explicit grSim_Packet(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommandsFieldNumber = 1,
    kReplacementFieldNumber = 2,
  };
  // optional .grSim_Commands commands = 1;
  bool has_commands() const;
  private:
  bool _internal_has_commands() const;
  public:
  void clear_commands();
  const ::grSim_Commands& commands() const;
  PROTOBUF_NODISCARD ::grSim_Commands* release_commands();
  ::grSim_Commands* mutable_commands();
  void set_allocated_commands(::grSim_Commands* commands);
  private:
  const ::grSim_Commands& _internal_commands() const;
  ::grSim_Commands* _internal_mutable_commands();
  public:
  void unsafe_arena_set_allocated_commands(
      ::grSim_Commands* commands);
  ::grSim_Commands* unsafe_arena_release_commands();

  // optional .grSim_Replacement replacement = 2;
  bool has_replacement() const;
  private:
  bool _internal_has_replacement() const;
  public:
  void clear_replacement();
  const ::grSim_Replacement& replacement() const;
  PROTOBUF_NODISCARD ::grSim_Replacement* release_replacement();
  ::grSim_Replacement* mutable_replacement();
  void set_allocated_replacement(::grSim_Replacement* replacement);
  private:
  const ::grSim_Replacement& _internal_replacement() const;
  ::grSim_Replacement* _internal_mutable_replacement();
  public:
  void unsafe_arena_set_allocated_replacement(
      ::grSim_Replacement* replacement);
  ::grSim_Replacement* unsafe_arena_release_replacement();

  // @@protoc_insertion_point(class_scope:grSim_Packet)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::grSim_Commands* commands_;
    ::grSim_Replacement* replacement_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_grSim_5fPacket_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// grSim_Packet

// optional .grSim_Commands commands = 1;
inline bool grSim_Packet::_internal_has_commands() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.commands_ != nullptr);
  return value;
}
inline bool grSim_Packet::has_commands() const {
  return _internal_has_commands();
}
inline const ::grSim_Commands& grSim_Packet::_internal_commands() const {
  const ::grSim_Commands* p = _impl_.commands_;
  return p != nullptr ? *p : reinterpret_cast<const ::grSim_Commands&>(
      ::_grSim_Commands_default_instance_);
}
inline const ::grSim_Commands& grSim_Packet::commands() const {
  // @@protoc_insertion_point(field_get:grSim_Packet.commands)
  return _internal_commands();
}
inline void grSim_Packet::unsafe_arena_set_allocated_commands(
    ::grSim_Commands* commands) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.commands_);
  }
  _impl_.commands_ = commands;
  if (commands) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:grSim_Packet.commands)
}
inline ::grSim_Commands* grSim_Packet::release_commands() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::grSim_Commands* temp = _impl_.commands_;
  _impl_.commands_ = nullptr;
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
inline ::grSim_Commands* grSim_Packet::unsafe_arena_release_commands() {
  // @@protoc_insertion_point(field_release:grSim_Packet.commands)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::grSim_Commands* temp = _impl_.commands_;
  _impl_.commands_ = nullptr;
  return temp;
}
inline ::grSim_Commands* grSim_Packet::_internal_mutable_commands() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.commands_ == nullptr) {
    auto* p = CreateMaybeMessage<::grSim_Commands>(GetArenaForAllocation());
    _impl_.commands_ = p;
  }
  return _impl_.commands_;
}
inline ::grSim_Commands* grSim_Packet::mutable_commands() {
  ::grSim_Commands* _msg = _internal_mutable_commands();
  // @@protoc_insertion_point(field_mutable:grSim_Packet.commands)
  return _msg;
}
inline void grSim_Packet::set_allocated_commands(::grSim_Commands* commands) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.commands_);
  }
  if (commands) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(commands));
    if (message_arena != submessage_arena) {
      commands = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, commands, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.commands_ = commands;
  // @@protoc_insertion_point(field_set_allocated:grSim_Packet.commands)
}

// optional .grSim_Replacement replacement = 2;
inline bool grSim_Packet::_internal_has_replacement() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.replacement_ != nullptr);
  return value;
}
inline bool grSim_Packet::has_replacement() const {
  return _internal_has_replacement();
}
inline const ::grSim_Replacement& grSim_Packet::_internal_replacement() const {
  const ::grSim_Replacement* p = _impl_.replacement_;
  return p != nullptr ? *p : reinterpret_cast<const ::grSim_Replacement&>(
      ::_grSim_Replacement_default_instance_);
}
inline const ::grSim_Replacement& grSim_Packet::replacement() const {
  // @@protoc_insertion_point(field_get:grSim_Packet.replacement)
  return _internal_replacement();
}
inline void grSim_Packet::unsafe_arena_set_allocated_replacement(
    ::grSim_Replacement* replacement) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.replacement_);
  }
  _impl_.replacement_ = replacement;
  if (replacement) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:grSim_Packet.replacement)
}
inline ::grSim_Replacement* grSim_Packet::release_replacement() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::grSim_Replacement* temp = _impl_.replacement_;
  _impl_.replacement_ = nullptr;
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
inline ::grSim_Replacement* grSim_Packet::unsafe_arena_release_replacement() {
  // @@protoc_insertion_point(field_release:grSim_Packet.replacement)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::grSim_Replacement* temp = _impl_.replacement_;
  _impl_.replacement_ = nullptr;
  return temp;
}
inline ::grSim_Replacement* grSim_Packet::_internal_mutable_replacement() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.replacement_ == nullptr) {
    auto* p = CreateMaybeMessage<::grSim_Replacement>(GetArenaForAllocation());
    _impl_.replacement_ = p;
  }
  return _impl_.replacement_;
}
inline ::grSim_Replacement* grSim_Packet::mutable_replacement() {
  ::grSim_Replacement* _msg = _internal_mutable_replacement();
  // @@protoc_insertion_point(field_mutable:grSim_Packet.replacement)
  return _msg;
}
inline void grSim_Packet::set_allocated_replacement(::grSim_Replacement* replacement) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.replacement_);
  }
  if (replacement) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(replacement));
    if (message_arena != submessage_arena) {
      replacement = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, replacement, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.replacement_ = replacement;
  // @@protoc_insertion_point(field_set_allocated:grSim_Packet.replacement)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grSim_5fPacket_2eproto
