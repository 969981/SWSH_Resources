/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062ad00; name: FUN_0062ad00
 */


ulong FUN_0062ad00(long param_1,long param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulong local_40;
  uint local_34;
  
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  local_34 = (**(code **)(param_1 + 0x340))(param_1,0x63767420,param_2,&local_40);
  if (local_34 == 0) {
    *(ulong *)(param_1 + 0x430) = local_40 >> 1;
    uVar4 = FUN_006029c0(uVar4,2,0,local_40 >> 1,0,&local_34);
    *(undefined8 *)(param_1 + 0x438) = uVar4;
    uVar2 = (ulong)local_34;
    if (local_34 == 0) {
      uVar2 = FUN_006081f0(param_2,*(long *)(param_1 + 0x430) << 1);
      if ((int)uVar2 == 0) {
        lVar3 = *(long *)(param_1 + 0x430);
        local_34 = 0;
        if (0 < lVar3) {
          puVar5 = *(undefined2 **)(param_1 + 0x438);
          puVar6 = puVar5;
          do {
            uVar1 = FUN_00608400(param_2);
            puVar7 = puVar6 + 1;
            *puVar6 = uVar1;
            puVar6 = puVar7;
          } while (puVar7 < puVar5 + lVar3);
        }
        FUN_00608390(param_2);
        if (*(char *)(param_1 + 0x471) == '\0') {
          uVar2 = (ulong)local_34;
        }
        else {
          uVar2 = FUN_0062ae00(param_1,param_2);
        }
      }
    }
  }
  else {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined8 *)(param_1 + 0x430) = 0;
  }
  return uVar2;
}


