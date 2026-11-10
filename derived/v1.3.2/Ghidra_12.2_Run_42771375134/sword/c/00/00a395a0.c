/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a395a0; name: FUN_00a395a0
 */


bool FUN_00a395a0(undefined8 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  char local_34 [4];
  
  plVar6 = (long *)*param_1;
  lVar4 = (**(code **)(*plVar6 + 0x7f8))(plVar6);
  uVar3 = *(undefined4 *)((long)param_1 + 0xc);
  local_34[0] = '\0';
  bVar1 = false;
  if (lVar4 != 0) {
    uVar5 = FUN_008e1600();
    if ((uVar5 & 1) == 0) {
      uVar2 = FUN_008e0a00(lVar4);
      uVar3 = (**(code **)(*plVar6 + 0x780))
                        (plVar6,*(undefined4 *)(param_1 + 1),uVar2,uVar3,local_34);
      if (local_34[0] != '\0') {
        *(undefined4 *)((long)param_1 + 0x14) = uVar3;
      }
      bVar1 = local_34[0] != '\0';
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


