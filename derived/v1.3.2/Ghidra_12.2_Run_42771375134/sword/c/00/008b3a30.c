/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b3a30; name: FUN_008b3a30
 */


void FUN_008b3a30(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar9)(puVar9);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  plVar4 = *(long **)(puVar9[0xb] + 0x10);
  uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar9[0xb] + 0x1c));
  uVar2 = FUN_008787f0();
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar9)(puVar9);
  lVar7 = FUN_00897d00();
  for (; plVar4 != (long *)lVar7; plVar4 = (long *)*plVar4) {
  }
  cVar1 = *(char *)(puVar9[0xb] + 0x2b);
  uVar8 = FUN_0087d610(uVar6,2);
  if ((uVar8 & 1) == 0) {
    if ((uVar2 & 0xffff) == 0) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x5d8);
      uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa8));
      FUN_014c9900(uVar6,0,uVar3,1);
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0))
      {
        plVar4 = (long *)(**(code **)*puVar9)(puVar9);
        lVar7 = FUN_00897d00();
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)lVar7) {
            puVar9 = puVar9 + -10;
            goto LAB_008b3cbc;
          }
        }
      }
      puVar9 = (undefined8 *)0x0;
LAB_008b3cbc:
      FUN_008a6b70(puVar9,0xcf39e9ca234899b0,cVar1 != '\0',0);
    }
    else {
      uVar8 = FUN_015209b0(lVar5,uVar2,1);
      if ((uVar8 & 1) == 0) {
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0
           )) {
          plVar4 = (long *)(**(code **)*puVar9)(puVar9);
          lVar7 = FUN_00897d00();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar7) {
              puVar9 = puVar9 + -10;
              goto LAB_008b3d34;
            }
          }
        }
        puVar9 = (undefined8 *)0x0;
LAB_008b3d34:
        FUN_008a6b70(puVar9,0xcf3363ca23434a50,cVar1 != '\0',0);
      }
      else {
        *(undefined1 *)(param_1 + 0xb8) = 1;
        FUN_014c9900(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x5d8),0,uVar2 & 0xffff,1);
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x5d8);
        uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0xa8));
        FUN_014c9900(uVar6,1,uVar3,1);
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0
           )) {
          plVar4 = (long *)(**(code **)*puVar9)(puVar9);
          lVar7 = FUN_00897d00();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar7) {
              puVar9 = puVar9 + -10;
              goto LAB_008b3c30;
            }
          }
        }
        puVar9 = (undefined8 *)0x0;
LAB_008b3c30:
        FUN_008a6c20(puVar9,0xcf366bca23458dbf,cVar1 != '\0');
      }
    }
  }
  else {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar9)(puVar9);
      lVar7 = FUN_00897d00();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar7) {
          puVar9 = puVar9 + -10;
          goto LAB_008b3b50;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
LAB_008b3b50:
    FUN_008a6b70(puVar9,0xcf3364ca23434c03,cVar1 != '\0',0);
  }
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008b3b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


