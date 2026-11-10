/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c3d90; name: FUN_010c3d90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010c3d90(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long local_50 [2];
  
  uVar3 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar3 & 1) != 0) {
    FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar4 = (long *)(**(code **)*puVar7)(puVar7);
      lVar5 = FUN_010aad10();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          puVar9 = puVar7 + -10;
          uVar8 = puVar7[4];
          local_50[0] = puVar7[5];
          if (local_50[0] == 0) goto LAB_010c3e1c;
          goto LAB_010c3e10;
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
    local_50[0] = _DAT_00000078;
    uVar8 = _DAT_00000070;
    if (_DAT_00000078 != 0) {
LAB_010c3e10:
      (**(code **)(*(long *)(local_50[0] + 0x48) + 0x10))();
    }
LAB_010c3e1c:
    uVar3 = FUN_00ff39d0(uVar8,local_50);
    if (local_50[0] != 0) {
      (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
      local_50[0] = 0;
    }
    if (((uVar3 >> 0x20 & 1) != 0) && ((int)uVar3 == 0)) {
      *(undefined1 *)(puVar9 + 0x10) = 1;
      lVar5 = *(long *)(param_1 + 0x90);
      *(undefined1 *)(lVar5 + 0x618) = 1;
      FUN_00ffcf80(lVar5 + 0x100,"anime_reset_on");
      local_50[0] = -0x5568b94f2d6f6c4a;
      FUN_00a0e830(*(undefined8 *)(lVar5 + 0x2b0),local_50);
      FUN_019a65b0();
      FUN_016b2d70(*(undefined8 *)(lVar5 + 0x5f8),*(undefined1 *)(lVar5 + 0x618));
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      lVar5 = puVar9[0xf];
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      uVar6 = FUN_0077d470(lVar5);
      uVar1 = FUN_0077d480(lVar5);
      FUN_0077dea0(local_50,9,uVar6,uVar1);
      iVar2 = atoi((char *)local_50);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      FUN_010c23d0(uVar8,iVar2,*(undefined1 *)(puVar9 + 0x10));
    }
    *(undefined4 *)(param_1 + 0x7c) = 3;
  }
  return;
}


