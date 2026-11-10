/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01250370; name: FUN_01250370
 */


void FUN_01250370(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  uVar11 = (param_3 - param_2 >> 4) * 0x6db6db6db6db6db7;
  lVar4 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  if ((ulong)((lVar4 - (long)puVar8 >> 4) * 0x6db6db6db6db6db7) < uVar11) {
    if (puVar8 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_1[1];
      if (puVar9 == puVar8) {
        puVar9 = puVar8;
      }
      else {
        do {
          puVar9 = puVar9 + -0xe;
          (**(code **)*puVar9)(puVar9);
        } while (puVar8 != puVar9);
        puVar9 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar8;
      FUN_017cd7a0(puVar9);
      lVar4 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    uVar7 = 0x249249249249249;
    if (0x249249249249249 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((lVar4 >> 4) * 0x6db6db6db6db6db7) < 0x124924924924924) {
      uVar5 = (lVar4 >> 4) * -0x2492492492492492;
      uVar7 = uVar11;
      if (uVar11 <= uVar5) {
        uVar7 = uVar5;
      }
    }
    plVar3 = (long *)FUN_017cd750(uVar7 * 0x70);
    param_1[2] = plVar3 + uVar7 * 0xe;
    *param_1 = plVar3;
    param_1[1] = plVar3;
    if (param_2 != param_3) {
      puVar1 = PTR_DAT_0271b858 + 0x10;
      puVar2 = PTR_DAT_027169c0 + 0x10;
      do {
        *plVar3 = (long)puVar1;
        *(undefined1 *)(plVar3 + 1) = *(undefined1 *)(param_2 + 8);
        plVar3[2] = *(long *)(param_2 + 0x10);
        *(undefined4 *)(plVar3 + 3) = *(undefined4 *)(param_2 + 0x18);
        plVar3[4] = *(long *)(param_2 + 0x20);
        *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)((long)plVar3 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
        *(undefined4 *)(plVar3 + 6) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)((long)plVar3 + 0x34) = *(undefined4 *)(param_2 + 0x34);
        *(undefined4 *)(plVar3 + 7) = *(undefined4 *)(param_2 + 0x38);
        *(undefined4 *)((long)plVar3 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
        *(undefined4 *)(plVar3 + 8) = *(undefined4 *)(param_2 + 0x40);
        *(undefined4 *)((long)plVar3 + 0x44) = *(undefined4 *)(param_2 + 0x44);
        *(undefined4 *)(plVar3 + 9) = *(undefined4 *)(param_2 + 0x48);
        *(undefined4 *)((long)plVar3 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
        *(undefined4 *)(plVar3 + 10) = *(undefined4 *)(param_2 + 0x50);
        *(undefined4 *)((long)plVar3 + 0x54) = *(undefined4 *)(param_2 + 0x54);
        *(undefined4 *)(plVar3 + 0xb) = *(undefined4 *)(param_2 + 0x58);
        *(undefined4 *)((long)plVar3 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
        *(undefined4 *)(plVar3 + 0xc) = *(undefined4 *)(param_2 + 0x60);
        *(undefined4 *)((long)plVar3 + 100) = *(undefined4 *)(param_2 + 100);
        *(undefined2 *)(plVar3 + 0xd) = *(undefined2 *)(param_2 + 0x68);
        *(undefined2 *)((long)plVar3 + 0x6a) = *(undefined2 *)(param_2 + 0x6a);
        *plVar3 = (long)puVar2;
        param_2 = param_2 + 0x70;
        plVar3 = (long *)(param_1[1] + 0x70);
        param_1[1] = plVar3;
      } while (param_3 != param_2);
    }
  }
  else {
    lVar6 = param_1[1] - (long)puVar8 >> 4;
    lVar4 = param_2 + (param_1[1] - (long)puVar8);
    if (uVar11 <= (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
      lVar4 = param_3;
    }
    if (lVar4 != param_2) {
      lVar10 = param_2;
      do {
        FUN_017c4240(puVar8,lVar10);
        lVar10 = lVar10 + 0x70;
        puVar8 = puVar8 + 0xe;
      } while (lVar4 != lVar10);
    }
    if ((ulong)(lVar6 * 0x6db6db6db6db6db7) < uVar11) {
      if (lVar4 != param_3) {
        plVar3 = (long *)param_1[1];
        puVar1 = PTR_DAT_0271b858 + 0x10;
        puVar2 = PTR_DAT_027169c0 + 0x10;
        do {
          *plVar3 = (long)puVar1;
          lVar4 = param_2 + lVar6 * 0x10;
          param_2 = param_2 + 0x70;
          *(undefined1 *)(plVar3 + 1) = *(undefined1 *)(lVar4 + 8);
          plVar3[2] = *(long *)(lVar4 + 0x10);
          *(undefined4 *)(plVar3 + 3) = *(undefined4 *)(lVar4 + 0x18);
          plVar3[4] = *(long *)(lVar4 + 0x20);
          *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(lVar4 + 0x28);
          *(undefined4 *)((long)plVar3 + 0x2c) = *(undefined4 *)(lVar4 + 0x2c);
          *(undefined4 *)(plVar3 + 6) = *(undefined4 *)(lVar4 + 0x30);
          *(undefined4 *)((long)plVar3 + 0x34) = *(undefined4 *)(lVar4 + 0x34);
          *(undefined4 *)(plVar3 + 7) = *(undefined4 *)(lVar4 + 0x38);
          *(undefined4 *)((long)plVar3 + 0x3c) = *(undefined4 *)(lVar4 + 0x3c);
          *(undefined4 *)(plVar3 + 8) = *(undefined4 *)(lVar4 + 0x40);
          *(undefined4 *)((long)plVar3 + 0x44) = *(undefined4 *)(lVar4 + 0x44);
          *(undefined4 *)(plVar3 + 9) = *(undefined4 *)(lVar4 + 0x48);
          *(undefined4 *)((long)plVar3 + 0x4c) = *(undefined4 *)(lVar4 + 0x4c);
          *(undefined4 *)(plVar3 + 10) = *(undefined4 *)(lVar4 + 0x50);
          *(undefined4 *)((long)plVar3 + 0x54) = *(undefined4 *)(lVar4 + 0x54);
          *(undefined4 *)(plVar3 + 0xb) = *(undefined4 *)(lVar4 + 0x58);
          *(undefined4 *)((long)plVar3 + 0x5c) = *(undefined4 *)(lVar4 + 0x5c);
          *(undefined4 *)(plVar3 + 0xc) = *(undefined4 *)(lVar4 + 0x60);
          *(undefined4 *)((long)plVar3 + 100) = *(undefined4 *)(lVar4 + 100);
          *(undefined2 *)(plVar3 + 0xd) = *(undefined2 *)(lVar4 + 0x68);
          *(undefined2 *)((long)plVar3 + 0x6a) = *(undefined2 *)(lVar4 + 0x6a);
          *plVar3 = (long)puVar2;
          plVar3 = (long *)(param_1[1] + 0x70);
          param_1[1] = plVar3;
        } while (param_3 + lVar6 * -0x10 != param_2);
      }
    }
    else {
      puVar9 = (undefined8 *)param_1[1];
      while (puVar9 != puVar8) {
        puVar9 = puVar9 + -0xe;
        (**(code **)*puVar9)(puVar9);
      }
      param_1[1] = puVar8;
    }
  }
  return;
}


