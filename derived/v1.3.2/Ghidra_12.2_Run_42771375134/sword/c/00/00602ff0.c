/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00602ff0; name: FUN_00602ff0
 */


int FUN_00602ff0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(param_1 + 2);
  uVar7 = (ulong)uVar2;
  uVar1 = (int)param_1[10] + param_2 + (int)param_1[0x13];
  if (uVar1 <= uVar2) {
    return 0;
  }
  lVar4 = *param_1;
  lVar5 = param_1[0xb];
  uVar1 = uVar1 + 1 & 0xfffffffe;
  uVar6 = (ulong)uVar1;
  if (uVar1 == 0) {
    if (lVar5 == 0) {
      iVar3 = 0;
    }
    else {
      (**(code **)(lVar4 + 0x10))(lVar4,lVar5);
      iVar3 = 0;
      lVar5 = 0;
    }
  }
  else {
    if (0x2aaaaaa < uVar1) {
      return 10;
    }
    if (uVar2 == 0) {
      lVar5 = (**(code **)(lVar4 + 8))(lVar4,uVar6 * 0x30);
      iVar3 = (uint)(lVar5 == 0) << 6;
      if (uVar1 == 0) goto LAB_0060312c;
    }
    else {
      lVar4 = (**(code **)(lVar4 + 0x18))(lVar4,uVar7 * 0x30,uVar6 * 0x30,lVar5);
      iVar3 = (uint)(lVar4 == 0) << 6;
      if (lVar4 != 0) {
        lVar5 = lVar4;
      }
      if (uVar1 <= uVar2) goto LAB_0060312c;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      memset((void *)(lVar5 + uVar7 * 0x30),0,(uVar6 - uVar7) * 0x30);
    }
  }
LAB_0060312c:
  param_1[0xb] = lVar5;
  if (iVar3 == 0) {
    *(uint *)(param_1 + 2) = uVar1;
    param_1[0x14] = lVar5 + (ulong)*(uint *)(param_1 + 10) * 0x30;
    return 0;
  }
  return iVar3;
}


