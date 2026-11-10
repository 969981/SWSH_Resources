/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00930070; name: FUN_00930070
 */


undefined8 FUN_00930070(long param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  puVar6 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar6 < 7) {
    uVar8 = 0;
  }
  else {
    if ((ulong)puVar6[3] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)((long)param_2 + (ulong)puVar6[3]);
    }
    if ((8 < *puVar6) && ((ulong)puVar6[4] != 0)) {
      uVar7 = *(undefined4 *)((long)param_2 + (ulong)puVar6[4]);
      goto LAB_009300c0;
    }
  }
  uVar7 = 0;
LAB_009300c0:
  uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x20));
  uVar1 = FUN_008f94e0(uVar8);
  uVar4 = FUN_008df3b0(uVar4,uVar1);
  uVar2 = FUN_00914430(uVar4,uVar8);
  if ((uVar2 & 0xff) != 6) {
    uVar4 = FUN_00914310(uVar4,uVar2);
    uVar5 = FUN_008e12a0(uVar4,0xf);
    uVar2 = FUN_008ec050(uVar5,uVar7);
    uVar3 = FUN_008e12a0(uVar4,0xd);
    if (uVar3 <= uVar2) {
      return 1;
    }
  }
  return 0;
}


