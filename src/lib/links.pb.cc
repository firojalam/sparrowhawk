// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: links.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "links.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace speech {
namespace sparrowhawk {

namespace {

const ::google::protobuf::Descriptor* Links_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Links_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_links_2eproto() {
  protobuf_AddDesc_links_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "links.proto");
  GOOGLE_CHECK(file != NULL);
  Links_descriptor_ = file->message_type(0);
  static const int Links_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Links, own_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Links, parent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Links, first_child_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Links, last_child_),
  };
  Links_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Links_descriptor_,
      Links::default_instance_,
      Links_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Links, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Links, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Links));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_links_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Links_descriptor_, &Links::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_links_2eproto() {
  delete Links::default_instance_;
  delete Links_reflection_;
}

void protobuf_AddDesc_links_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013links.proto\022\022speech.sparrowhawk\"S\n\005Lin"
    "ks\022\021\n\town_index\030\001 \001(\005\022\016\n\006parent\030\002 \001(\005\022\023\n"
    "\013first_child\030\003 \001(\005\022\022\n\nlast_child\030\004 \001(\005", 118);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "links.proto", &protobuf_RegisterTypes);
  Links::default_instance_ = new Links();
  Links::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_links_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_links_2eproto {
  StaticDescriptorInitializer_links_2eproto() {
    protobuf_AddDesc_links_2eproto();
  }
} static_descriptor_initializer_links_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Links::kOwnIndexFieldNumber;
const int Links::kParentFieldNumber;
const int Links::kFirstChildFieldNumber;
const int Links::kLastChildFieldNumber;
#endif  // !_MSC_VER

Links::Links()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Links::InitAsDefaultInstance() {
}

Links::Links(const Links& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Links::SharedCtor() {
  _cached_size_ = 0;
  own_index_ = 0;
  parent_ = 0;
  first_child_ = 0;
  last_child_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Links::~Links() {
  SharedDtor();
}

void Links::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Links::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Links::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Links_descriptor_;
}

const Links& Links::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_links_2eproto();
  return *default_instance_;
}

Links* Links::default_instance_ = NULL;

Links* Links::New() const {
  return new Links;
}

void Links::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    own_index_ = 0;
    parent_ = 0;
    first_child_ = 0;
    last_child_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Links::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 own_index = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &own_index_)));
          set_has_own_index();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_parent;
        break;
      }

      // optional int32 parent = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_parent:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &parent_)));
          set_has_parent();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_first_child;
        break;
      }

      // optional int32 first_child = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_first_child:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &first_child_)));
          set_has_first_child();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_last_child;
        break;
      }

      // optional int32 last_child = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_last_child:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &last_child_)));
          set_has_last_child();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Links::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 own_index = 1;
  if (has_own_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->own_index(), output);
  }

  // optional int32 parent = 2;
  if (has_parent()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->parent(), output);
  }

  // optional int32 first_child = 3;
  if (has_first_child()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->first_child(), output);
  }

  // optional int32 last_child = 4;
  if (has_last_child()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->last_child(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Links::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 own_index = 1;
  if (has_own_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->own_index(), target);
  }

  // optional int32 parent = 2;
  if (has_parent()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->parent(), target);
  }

  // optional int32 first_child = 3;
  if (has_first_child()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->first_child(), target);
  }

  // optional int32 last_child = 4;
  if (has_last_child()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->last_child(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Links::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 own_index = 1;
    if (has_own_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->own_index());
    }

    // optional int32 parent = 2;
    if (has_parent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->parent());
    }

    // optional int32 first_child = 3;
    if (has_first_child()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->first_child());
    }

    // optional int32 last_child = 4;
    if (has_last_child()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->last_child());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Links::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Links* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Links*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Links::MergeFrom(const Links& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_own_index()) {
      set_own_index(from.own_index());
    }
    if (from.has_parent()) {
      set_parent(from.parent());
    }
    if (from.has_first_child()) {
      set_first_child(from.first_child());
    }
    if (from.has_last_child()) {
      set_last_child(from.last_child());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Links::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Links::CopyFrom(const Links& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Links::IsInitialized() const {

  return true;
}

void Links::Swap(Links* other) {
  if (other != this) {
    std::swap(own_index_, other->own_index_);
    std::swap(parent_, other->parent_);
    std::swap(first_child_, other->first_child_);
    std::swap(last_child_, other->last_child_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Links::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Links_descriptor_;
  metadata.reflection = Links_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sparrowhawk
}  // namespace speech

// @@protoc_insertion_point(global_scope)
