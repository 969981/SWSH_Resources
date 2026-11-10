/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c3920; name: FUN_010c3920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010c3920(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 local_50 [2];
  
  lVar8 = *(long *)(param_1 + 0x90);
  switch(*(undefined4 *)(lVar8 + 0x5cc)) {
  case 0:
    goto switchD_010c395c_caseD_0;
  case 1:
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5e0),0);
    FUN_016b2eb0(*(undefined8 *)(lVar8 + 0x5e0));
    lVar8 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5e8),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5f0),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5f8),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x600),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x608),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x610),0);
    FUN_010c4010(param_1,0x94da7dbfcb8cb2e4);
    *(undefined4 *)(param_1 + 0x7c) = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x7c) = 4;
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5e0),0);
    FUN_016b2eb0(*(undefined8 *)(lVar8 + 0x5e0));
    lVar8 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5e8),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5f0),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5f8),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x600),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x608),0);
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x610),0);
    FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5e8),1);
    FUN_010c4010(param_1,0xf9dbe2016bd7e73a);
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x240);
    if (lVar8 == 0) {
      iVar2 = _DAT_00000068;
      if (_DAT_00000068 == 0) goto LAB_010c3c3c;
LAB_010c3ab0:
      if (iVar2 != 2) {
        if (iVar2 == 1) {
          if (*(char *)(param_1 + 0xb0) != '\0') {
            uVar10 = 4;
            lVar8 = *(long *)(param_1 + 0x68);
            if (lVar8 != 0) goto LAB_010c3c58;
            puVar9 = (undefined8 *)0x0;
            goto LAB_010c3ccc;
          }
          *(undefined4 *)(param_1 + 0x7c) = 6;
          FUN_010c4010(param_1,0xf9dbe3016bd7e8ed);
        }
        break;
      }
      uVar10 = 5;
      lVar8 = *(long *)(param_1 + 0x68);
      puVar9 = (undefined8 *)0x0;
      if (lVar8 != 0) {
LAB_010c3c58:
        puVar9 = *(undefined8 **)(lVar8 + 0x60);
        if (puVar9 != (undefined8 *)0x0) {
          plVar4 = (long *)(**(code **)*puVar9)(puVar9);
          lVar8 = FUN_010aad10();
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)lVar8) {
              puVar9 = puVar9 + -10;
              goto LAB_010c3ccc;
            }
          }
        }
        puVar9 = (undefined8 *)0x0;
      }
    }
    else {
      plVar4 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      iVar2 = *(int *)(lVar8 + 0x68);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      if (iVar2 != 0) goto LAB_010c3ab0;
LAB_010c3c3c:
      uVar10 = 3;
      lVar8 = *(long *)(param_1 + 0x68);
      if (lVar8 != 0) goto LAB_010c3c58;
      puVar9 = (undefined8 *)0x0;
    }
LAB_010c3ccc:
    uVar5 = *(undefined8 *)(*(long *)PTR_DAT_02710880 + 0xc0);
    if (*(char *)(puVar9 + 0x10) == '\0') {
      uVar7 = 0;
    }
    else {
      lVar8 = puVar9[0xf];
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      uVar6 = FUN_0077d470(lVar8);
      uVar1 = FUN_0077d480(lVar8);
      FUN_0077dea0(local_50,9,uVar6,uVar1);
      uVar3 = atoi((char *)local_50);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      uVar7 = (ulong)uVar3 << 0x20 | 1;
    }
    FUN_01196ce0(uVar5,uVar10,uVar7);
    break;
  case 3:
    *(undefined1 *)(lVar8 + 0x618) = 0;
    FUN_00ffcf80(lVar8 + 0x100,"anime_reset_off");
    local_50[0] = 0xaa9746b0d29093b6;
    FUN_00a0e830(*(undefined8 *)(lVar8 + 0x2b0),local_50);
    FUN_019a65b0();
    FUN_016b2d70(*(undefined8 *)(lVar8 + 0x5f8),*(undefined1 *)(lVar8 + 0x618));
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar9)(puVar9);
      lVar8 = FUN_010aad10();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar8) {
          puVar12 = puVar9 + -10;
          lVar8 = puVar9[5];
          goto joined_r0x010c3c9c;
        }
      }
    }
    puVar12 = (undefined8 *)0x0;
    lVar8 = _DAT_00000078;
joined_r0x010c3c9c:
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    *(undefined1 *)(puVar12 + 0x10) = 0;
    FUN_0077d520(lVar8,&DAT_02158da8);
    uVar10 = *(undefined8 *)(param_1 + 0x90);
    lVar11 = puVar12[0xf];
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    uVar5 = FUN_0077d470(lVar11);
    uVar1 = FUN_0077d480(lVar11);
    FUN_0077dea0(local_50,9,uVar5,uVar1);
    iVar2 = atoi((char *)local_50);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    FUN_010c23d0(uVar10,iVar2,*(undefined1 *)(puVar12 + 0x10));
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    break;
  case 5:
    *(undefined8 *)(param_1 + 0x7c) = 7;
    FUN_00ffa160(lVar8,0,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x5cc) = 0;
switchD_010c395c_caseD_0:
  return;
}


