/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092ff80; name: FUN_0092ff80
 */


bool FUN_0092ff80(long param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar4 == 0)) {
    cVar1 = FUN_008f94e0(param_3);
    if (cVar1 != '\0') {
      return false;
    }
  }
  else {
    uVar6 = *(uint *)((long)param_2 + uVar4);
    uVar2 = FUN_008f94e0(param_3);
    if (uVar6 != (uVar2 & 0xff)) {
      return false;
    }
  }
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar5 < 7) {
    uVar7 = 0;
  }
  else {
    if ((ulong)puVar5[3] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)param_2 + (ulong)puVar5[3]);
    }
    if ((8 < *puVar5) && ((ulong)puVar5[4] != 0)) {
      uVar6 = *(uint *)((long)param_2 + (ulong)puVar5[4]);
      goto LAB_00930030;
    }
  }
  uVar6 = 0;
LAB_00930030:
  uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x20));
  FUN_008df3b0(uVar3,uVar7);
  uVar2 = FUN_009141d0();
  return uVar6 == (uVar2 & 0xff);
}


