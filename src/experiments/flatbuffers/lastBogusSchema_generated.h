// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_LASTBOGUSSCHEMA_GALAVANT_TEST_H_
#define FLATBUFFERS_GENERATED_LASTBOGUSSCHEMA_GALAVANT_TEST_H_

#include "flatbuffers/flatbuffers.h"

#include "anotherBogusSchema_generated.h"
#include "bogusSchema_generated.h"

namespace Galavant
{
namespace Test
{
struct HelloDict;

struct HelloDict FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table
{
	enum
	{
		VT_HELLOARRAY = 4
	};
	const flatbuffers::Vector<flatbuffers::Offset<Galavant::Test::Hello> > *helloArray() const
	{
		return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Galavant::Test::Hello> > *>(
			VT_HELLOARRAY);
	}
	bool Verify(flatbuffers::Verifier &verifier) const
	{
		return VerifyTableStart(verifier) &&
			   VerifyField<flatbuffers::uoffset_t>(verifier, VT_HELLOARRAY) &&
			   verifier.Verify(helloArray()) && verifier.VerifyVectorOfTables(helloArray()) &&
			   verifier.EndTable();
	}
};

struct HelloDictBuilder
{
	flatbuffers::FlatBufferBuilder &fbb_;
	flatbuffers::uoffset_t start_;
	void add_helloArray(
		flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Galavant::Test::Hello> > >
			helloArray)
	{
		fbb_.AddOffset(HelloDict::VT_HELLOARRAY, helloArray);
	}
	HelloDictBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb)
	{
		start_ = fbb_.StartTable();
	}
	HelloDictBuilder &operator=(const HelloDictBuilder &);
	flatbuffers::Offset<HelloDict> Finish()
	{
		auto o = flatbuffers::Offset<HelloDict>(fbb_.EndTable(start_, 1));
		return o;
	}
};

inline flatbuffers::Offset<HelloDict> CreateHelloDict(
	flatbuffers::FlatBufferBuilder &_fbb,
	flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Galavant::Test::Hello> > >
		helloArray = 0)
{
	HelloDictBuilder builder_(_fbb);
	builder_.add_helloArray(helloArray);
	return builder_.Finish();
}

inline flatbuffers::Offset<HelloDict> CreateHelloDictDirect(
	flatbuffers::FlatBufferBuilder &_fbb,
	const std::vector<flatbuffers::Offset<Galavant::Test::Hello> > *helloArray = nullptr)
{
	return CreateHelloDict(
		_fbb, helloArray ?
				  _fbb.CreateVector<flatbuffers::Offset<Galavant::Test::Hello> >(*helloArray) :
				  0);
}

inline const Galavant::Test::HelloDict *GetHelloDict(const void *buf)
{
	return flatbuffers::GetRoot<Galavant::Test::HelloDict>(buf);
}

inline bool VerifyHelloDictBuffer(flatbuffers::Verifier &verifier)
{
	return verifier.VerifyBuffer<Galavant::Test::HelloDict>(nullptr);
}

inline void FinishHelloDictBuffer(flatbuffers::FlatBufferBuilder &fbb,
								  flatbuffers::Offset<Galavant::Test::HelloDict> root)
{
	fbb.Finish(root);
}

}  // namespace Test
}  // namespace Galavant

#endif  // FLATBUFFERS_GENERATED_LASTBOGUSSCHEMA_GALAVANT_TEST_H_