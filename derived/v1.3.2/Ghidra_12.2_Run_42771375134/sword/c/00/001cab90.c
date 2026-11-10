/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cab90; name: FUN_001cab90
 */


void FUN_001cab90(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_02711080;
  if (*(int *)(param_1 + 0x40) != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x48);
      uVar3 = (**(code **)*param_2)(param_2,0x80000000,*(undefined8 *)(lVar5 + lVar7));
      *(undefined8 *)(lVar5 + lVar7) = uVar3;
      lVar5 = *(long *)(*(long *)(param_1 + 0x48) + lVar7);
      lVar5 = lVar5 + *(long *)(puVar1 + (ulong)*(ushort *)(lVar5 + 8) * 8);
      lVar4 = FUN_001e16c0(lVar5);
      if (lVar4 == 0) {
        FUN_001e15e0(lVar5,param_1,*(undefined8 *)(*(long *)(param_1 + 0x48) + lVar7));
      }
      iVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x48) + lVar7) + 0x30))();
      if (iVar2 == 4) {
        plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 0x48) + lVar7) + 0x180);
        lVar5 = (**(code **)(*plVar6 + 0x100))(plVar6);
        if (lVar5 == 0) {
          plVar6[0x13] = param_1;
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (uVar8 < *(uint *)(param_1 + 0x40));
  }
  return;
}


