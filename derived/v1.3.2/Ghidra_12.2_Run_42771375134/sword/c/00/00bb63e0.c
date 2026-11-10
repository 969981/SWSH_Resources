/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb63e0; name: FUN_00bb63e0
 */


undefined8 FUN_00bb63e0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if (param_2 == 1) {
    puVar2 = &DAT_0215a168;
    uVar3 = 0x1712cabdfe94;
  }
  else {
    uVar3 = FUN_00bcb370(param_1,0);
    uVar1 = 0;
    if ((uVar3 & 1) == 0) goto LAB_00bb6458;
    puVar2 = &DAT_0215a148;
    uVar3 = 0x1812cabe0047;
  }
  FUN_00bc4460(param_1,puVar2,2,uVar3 | 0x86c1000000000000,0,0);
  uVar1 = 1;
LAB_00bb6458:
  *(undefined4 *)(param_1 + 0x684) = 1;
  return uVar1;
}


