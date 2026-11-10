/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c83340; name: FUN_00c83340
 */


undefined8 FUN_00c83340(long param_1,int param_2,long *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 8) <= param_2)) {
    return 0;
  }
  uVar6 = (ulong)param_2;
  if (uVar6 < *(ulong *)(*(long *)(param_1 + 0x30) + 0x48)) {
    lVar7 = uVar6 * 0x20;
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) + lVar7) != 0) {
      return 0;
    }
    uVar1 = (**(code **)(*param_3 + 0x10))(param_3,0x58,8);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      FUN_00c82140(uVar1,param_3,param_4);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (uVar6 < *(ulong *)(*(long *)(param_1 + 0x30) + 0x48)) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0x40);
        puVar3 = *(undefined8 **)(lVar2 + lVar7);
        *(undefined8 *)(lVar2 + lVar7) = uVar1;
        if (puVar3 == (undefined8 *)0x0) {
          lVar2 = lVar2 + uVar6 * 0x20;
          puVar4 = (undefined8 *)(lVar2 + 8);
          puVar5 = (undefined8 *)(lVar2 + 0x10);
          puVar8 = (undefined8 *)(lVar2 + 0x18);
        }
        else {
          (**(code **)*puVar3)(puVar3);
          lVar2 = lVar2 + uVar6 * 0x20;
          puVar4 = (undefined8 *)(lVar2 + 8);
          puVar5 = (undefined8 *)(lVar2 + 0x10);
          puVar8 = (undefined8 *)(lVar2 + 0x18);
          (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,puVar3,*puVar5,*puVar8);
        }
        *puVar4 = param_3;
        *puVar5 = 0x58;
        *puVar8 = 8;
        if (uVar6 < *(ulong *)(*(long *)(param_1 + 0x30) + 0x48)) {
          return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 0x40) + lVar7);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


