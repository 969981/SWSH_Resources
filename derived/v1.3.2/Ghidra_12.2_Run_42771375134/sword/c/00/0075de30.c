/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075de30; name: FUN_0075de30
 */


/* WARNING: Removing unreachable block (ram,0x0075de64) */

uint FUN_0075de30(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  
  FUN_0075e110();
  if ((long)param_2 < 1) {
    return 0;
  }
  if (param_2 == 1) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar3 = (param_2 & 1) - param_2;
    uVar2 = 0xffffffff;
    do {
      uVar2 = *(uint *)(PTR_DAT_02715fe0 + ((ulong)(*param_1 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      uVar2 = *(uint *)(PTR_DAT_02715fe0 + ((ulong)(*pbVar1 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      lVar3 = lVar3 + 2;
    } while (lVar3 != 0);
    if ((param_2 & 1) == 0) goto LAB_0075dedc;
  }
  uVar2 = *(uint *)(PTR_DAT_02715fe0 + ((ulong)(*param_1 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
LAB_0075dedc:
  return ~uVar2;
}


