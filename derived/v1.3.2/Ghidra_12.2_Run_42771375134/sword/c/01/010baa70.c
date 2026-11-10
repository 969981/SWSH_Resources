/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010baa70; name: FUN_010baa70
 */


void FUN_010baa70(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  long local_38;
  
  uVar4 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar4 & 1) != 0) {
    iVar3 = FUN_010386e0(*(undefined8 *)(param_1 + 0xa8));
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
      lVar6 = *(long *)(param_1 + 0x90);
      FUN_016b2d70(*(undefined8 *)(lVar6 + 0x1a80),1);
      FUN_016b2d70(*(undefined8 *)(lVar6 + 0x1a88),1);
      FUN_016b2d70(*(undefined8 *)(lVar6 + 0x1a90),1);
      FUN_016b2d70(*(undefined8 *)(lVar6 + 0x1a98),1);
      FUN_016b2d70(*(undefined8 *)(lVar6 + 0x1aa0),1);
      lVar6 = *(long *)(param_1 + 0x90);
      lVar8 = *(long *)PTR_DAT_027108d8;
      FUN_016b2d70(*(undefined8 *)(lVar6 + 0x1a70),*(int *)(lVar8 + 0x11aec) != 0);
      FUN_016b2d70(*(undefined8 *)(lVar6 + 0x1a78),*(int *)(lVar8 + 0x11aec) != 0);
      FUN_010bc6f0(param_1,1,1);
      return;
    }
    if (iVar3 == 0) {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar5 = (long *)(**(code **)*puVar7)(puVar7);
      lVar6 = FUN_010aad10();
      puVar2 = PTR_DAT_027108d8;
      for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
      }
      lVar8 = puVar7[2];
      uVar4 = FUN_010a31a0(*(undefined8 *)PTR_DAT_027108d8,*(undefined4 *)(lVar8 + 8));
      lVar6 = *(long *)puVar2;
      if ((uVar4 & 1) == 0) {
        lVar1 = 0;
        if (*(int *)(lVar6 + 0x11af0) != 8) {
          lVar1 = 16000;
        }
        lVar6 = lVar6 + lVar1 + (long)*(int *)(lVar8 + 8) * 0xa0;
        uStack_80 = *(undefined8 *)(lVar6 + 0x160);
        local_78 = *(undefined8 *)(lVar6 + 0x168);
        uStack_70 = *(undefined8 *)(lVar6 + 0x170);
        local_68 = *(undefined8 *)(lVar6 + 0x178);
        uStack_60 = *(undefined8 *)(lVar6 + 0x180);
        uStack_48 = *(undefined8 *)(lVar6 + 0x198);
        local_58 = *(undefined8 *)(lVar6 + 0x188);
        local_50 = *(undefined8 *)(lVar6 + 400);
        local_40 = *(undefined2 *)(lVar6 + 0x1a0);
        FUN_01211890(&local_38,*(undefined8 *)PTR_DAT_02710958,&uStack_80);
        if (local_38 != 0) {
          FUN_010bd8b0(lVar8 + 0x20,&local_38);
          *(undefined4 *)(param_1 + 0x7c) = 0x23;
          FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),0,1);
          FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),0,1);
          *(undefined4 *)(param_1 + 0x84) = 5;
          puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
          plVar5 = (long *)(**(code **)*puVar7)(puVar7);
          lVar6 = FUN_010aad10();
          for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
          }
          *(undefined4 *)puVar7[2] = 3;
          return;
        }
        lVar6 = *(long *)puVar2;
      }
      *(undefined4 *)(lVar6 + (long)*(int *)(lVar8 + 8) * 0xa0 + 0x10c) = 0xffffffff;
      FUN_010bc320(param_1,0x5cd950fe6d47a4d3,0,1,1,0);
      *(undefined4 *)(param_1 + 0x7c) = 0x2d;
    }
  }
  return;
}


