/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048e150; name: FUN_0048e150
 */


void FUN_0048e150(long param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  long lVar2;
  int local_48;
  int iStack_44;
  undefined1 auStack_40 [8];
  short *local_38;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  lVar2 = *(long *)(param_1 + 0x1f8);
  *param_2 = *(ushort *)(lVar2 + 0xc) >> 2 & 0x1f;
  *param_3 = *(undefined4 *)(lVar2 + 0x18);
  if ((*(long *)(param_1 + 0x290) != 0) && (uVar1 = *(uint *)(param_1 + 0x298), uVar1 != 0)) {
    FUN_0045fb10(*(long *)(param_1 + 0x290),uVar1,auStack_40,0,auStack_24,auStack_28,&iStack_44,
                 &local_48,0,0,1);
    if (*local_38 == -2) {
      *param_3 = 0x10001;
    }
    if ((uint)(iStack_44 + local_48) <= uVar1) {
      *param_2 = 3;
    }
  }
  return;
}


