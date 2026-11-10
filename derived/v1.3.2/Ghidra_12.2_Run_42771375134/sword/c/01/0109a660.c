/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109a660; name: FUN_0109a660
 */


void FUN_0109a660(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6e;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  
  pcVar7 = *(code **)(param_1 + 0xb8);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    (*pcVar7)(param_1 + 0xd0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0xd0);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar8 = param_2[3];
    *(undefined8 *)(param_1 + 0xc0) = param_2[2];
    *(undefined8 *)(param_1 + 200) = uVar8;
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
  }
  pcVar7 = *(code **)(param_1 + 0x138);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    (*pcVar7)(param_1 + 0x150);
  }
  if ((code *)param_2[0x12] != (code *)0x0) {
    (*(code *)param_2[0x12])(param_2 + 0x14,param_1 + 0x150);
    uVar2 = param_2[0x10];
    uVar3 = param_2[0x11];
    uVar8 = param_2[0x13];
    *(undefined8 *)(param_1 + 0x140) = param_2[0x12];
    *(undefined8 *)(param_1 + 0x148) = uVar8;
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    *(undefined8 *)(param_1 + 0x138) = uVar3;
  }
  uVar2 = param_2[0x20];
  uVar3 = param_2[0x21];
  uVar8 = param_2[0x22];
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x23);
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  *(undefined8 *)(param_1 + 0x1c0) = uVar8;
  puVar1 = param_2 + 0x20;
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(param_2 + 4);
  }
  iVar4 = *(int *)(param_2 + 0x23);
  if (iVar4 == 0) {
    local_a8 = 0;
    local_a0 = 0;
    local_98 = CONCAT53(local_98._3_5_,0x101);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      lVar6 = FUN_01097310();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar6) {
          puVar9 = puVar9 + -10;
          goto LAB_0109a860;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
LAB_0109a860:
    FUN_010962e0(puVar9,&local_a8,puVar1,*(char *)(param_1 + 0xa5) == '\0');
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        local_58 = 0x101;
        local_68 = 0;
        uStack_60 = 0;
        local_56 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_a8 = 0;
        local_70 = 1;
        local_6e = 0xffff;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        local_98 = 0;
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0
           )) {
          plVar5 = (long *)(**(code **)*puVar9)(puVar9);
          lVar6 = FUN_01097310();
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)lVar6) {
              puVar9 = puVar9 + -10;
              goto LAB_0109a7c4;
            }
          }
        }
        puVar9 = (undefined8 *)0x0;
LAB_0109a7c4:
        FUN_01096350(puVar9,&local_68,&local_a8,puVar1,param_2 + 0x21,param_2 + 0x22,
                     *(char *)(param_1 + 0xa5) == '\0',0);
        (**(code **)(**(long **)(param_1 + 0x88) + 0x88))
                  (*(long **)(param_1 + 0x88),&local_68,&local_a8);
        *(undefined1 *)(param_1 + 0xa5) = 1;
      }
      goto LAB_0109a904;
    }
    local_a8 = 0;
    local_a0 = 0;
    local_98 = CONCAT53(local_98._3_5_,0x101);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      lVar6 = FUN_01097310();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar6) {
          puVar9 = puVar9 + -10;
          goto LAB_0109a8cc;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
LAB_0109a8cc:
    FUN_01096270(puVar9,&local_a8,puVar1,*(char *)(param_1 + 0xa5) == '\0');
  }
  FUN_01038170(*(undefined8 *)(param_1 + 0x88),&local_a8);
  *(undefined1 *)(param_1 + 0xa5) = 1;
LAB_0109a904:
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  *(undefined4 *)(param_1 + 0x90) = 0xc;
  return;
}


