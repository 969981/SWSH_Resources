/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048d550; name: FUN_0048d550
 */


void FUN_0048d550(long param_1,long param_2)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  long local_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_00479970();
  }
  if (*(int *)(param_2 + 8) != 0) {
    local_48 = *(undefined4 *)(param_1 + 0x29c);
    local_40 = *(undefined8 *)(param_1 + 0x2a0);
    local_38 = *(undefined4 *)(param_1 + 0x38);
    local_50 = *(undefined8 *)(param_1 + 0x28);
    local_30 = *(undefined4 *)(param_1 + 0x288);
    local_34 = *(undefined4 *)(param_1 + 0x1d8);
    local_2c = *(byte *)(param_1 + 0x26f) >> 1 & 1;
    local_28 = param_1;
    FUN_004778e0(*(undefined8 *)PTR_DAT_02712dc0,param_2,&local_50,param_1 + 0x68);
  }
  *(ushort *)(param_1 + 0x16c) = *(ushort *)(param_1 + 0x16c) | 0x80;
  return;
}


