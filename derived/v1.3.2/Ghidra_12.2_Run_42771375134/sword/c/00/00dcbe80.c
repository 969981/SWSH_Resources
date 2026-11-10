/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcbe80; name: FUN_00dcbe80
 */


void FUN_00dcbe80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_70;
  long local_68;
  
  puVar3 = PTR_DAT_02715298;
  puVar2 = PTR_DAT_02715290;
  puVar1 = PTR_DAT_02715088;
  lVar10 = *(long *)(param_1 + 0xa50);
  lVar11 = *(long *)(param_1 + 0xa58);
  local_70 = param_3;
  do {
    if (lVar10 == lVar11) {
      return;
    }
    lVar6 = FUN_012c49c0(&local_68,param_2,&local_70);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    local_68 = lVar6;
    FUN_006d9640(param_1,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    if ((*(long *)(lVar6 + 0x80) != 0) &&
       (lVar8 = *(long *)(lVar10 + 0x88), *(int *)(*(long *)(lVar6 + 0x80) + 0x54) != 0)) {
      if (*(long *)(lVar6 + 0x80) == 0) {
LAB_00dcbfbc:
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = *(undefined8 **)(*(long *)(lVar6 + 0x80) + 0x60);
        if (puVar9 != (undefined8 *)0x0) {
          plVar7 = (long *)(**(code **)*puVar9)(puVar9);
          if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
            uVar5 = FUN_01590a70();
            *(undefined8 *)puVar3 = uVar5;
            __cxa_guard_release(puVar2);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == (long *)puVar3) {
              puVar9 = puVar9 + -10;
              goto LAB_00dcbfc0;
            }
          }
          goto LAB_00dcbfbc;
        }
      }
LAB_00dcbfc0:
      FUN_006cb0d0(puVar9);
      FUN_006cb4e0(puVar9,puVar1,lVar8 + 0x1b0);
      FUN_012c4020(lVar6,*(undefined4 *)(lVar6 + 0xa8));
    }
    FUN_012c4020(lVar6,*(undefined4 *)(lVar10 + 0x220));
    *(long *)(lVar10 + 400) = lVar6;
    lVar10 = lVar10 + 0x230;
  } while( true );
}


