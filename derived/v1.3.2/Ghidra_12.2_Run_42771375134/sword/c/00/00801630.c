/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801630; name: ~stringbuf
 */


/* std::stringbuf::~stringbuf() */

void __thiscall std::stringbuf::~stringbuf(stringbuf *this)

{
  *(undefined **)this = PTR_vtable_02716f10 + 0x10;
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  std::streambuf::~streambuf((streambuf *)this);
  return;
}


