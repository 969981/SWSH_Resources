/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006faa30; name: FUN_006faa30
 */


undefined8 FUN_006faa30(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
  return *(undefined8 *)
          (*(long *)(lVar1 + 0x20) + (long)param_2 * 0x40 +
          *(long *)(PTR_DAT_027157f0 + (ulong)*(byte *)(lVar1 + 0x14) * 8));
}


