/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0124f1e0; name: FUN_0124f1e0
 */


void FUN_0124f1e0(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  uVar10 = (param_3 - param_2 >> 5) * -0x5555555555555555;
  lVar5 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  if ((ulong)((lVar5 - (long)puVar8 >> 5) * -0x5555555555555555) < uVar10) {
    if (puVar8 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_1[1];
      if (puVar9 == puVar8) {
        puVar9 = puVar8;
      }
      else {
        do {
          puVar9 = puVar9 + -0xc;
          (**(code **)*puVar9)(puVar9);
        } while (puVar8 != puVar9);
        puVar9 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar8;
      FUN_017cd7a0(puVar9);
      lVar5 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    uVar7 = 0x2aaaaaaaaaaaaaa;
    if (0x2aaaaaaaaaaaaaa < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((lVar5 >> 5) * -0x5555555555555555) < 0x155555555555555) {
      uVar6 = (lVar5 >> 5) * 0x5555555555555556;
      uVar7 = uVar10;
      if (uVar10 <= uVar6) {
        uVar7 = uVar6;
      }
    }
    plVar4 = (long *)FUN_017cd750(uVar7 * 0x60);
    param_1[2] = plVar4 + uVar7 * 0xc;
    *param_1 = plVar4;
    param_1[1] = plVar4;
    if (param_2 != param_3) {
      puVar1 = PTR_DAT_027265e8 + 0x10;
      puVar2 = PTR_DAT_02726738 + 0x10;
      do {
        *plVar4 = (long)puVar1;
        *(undefined1 *)(plVar4 + 1) = *(undefined1 *)(param_2 + 8);
        plVar4[2] = *(long *)(param_2 + 0x10);
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)((long)plVar4 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
        *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(param_2 + 0x20);
        FUN_017e3640(plVar4 + 5,param_2 + 0x28);
        *plVar4 = (long)puVar2;
        param_2 = param_2 + 0x60;
        plVar4 = (long *)(param_1[1] + 0x60);
        param_1[1] = plVar4;
      } while (param_3 != param_2);
    }
  }
  else {
    uVar7 = (param_1[1] - (long)puVar8 >> 5) * -0x5555555555555555;
    lVar5 = param_2 + (param_1[1] - (long)puVar8);
    lVar3 = lVar5;
    if (uVar10 <= uVar7) {
      lVar3 = param_3;
    }
    while (lVar3 != param_2) {
      FUN_017c3820(puVar8,param_2);
      puVar8 = puVar8 + 0xc;
      param_2 = param_2 + 0x60;
    }
    if (uVar7 < uVar10) {
      if (lVar3 != param_3) {
        plVar4 = (long *)param_1[1];
        puVar1 = PTR_DAT_027265e8 + 0x10;
        puVar2 = PTR_DAT_02726738 + 0x10;
        do {
          *plVar4 = (long)puVar1;
          *(undefined1 *)(plVar4 + 1) = *(undefined1 *)(lVar5 + 8);
          plVar4[2] = *(long *)(lVar5 + 0x10);
          *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(lVar5 + 0x18);
          *(undefined4 *)((long)plVar4 + 0x1c) = *(undefined4 *)(lVar5 + 0x1c);
          *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(lVar5 + 0x20);
          FUN_017e3640(plVar4 + 5,lVar5 + 0x28);
          *plVar4 = (long)puVar2;
          lVar5 = lVar5 + 0x60;
          plVar4 = (long *)(param_1[1] + 0x60);
          param_1[1] = plVar4;
        } while (param_3 != lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)param_1[1];
      while (puVar9 != puVar8) {
        puVar9 = puVar9 + -0xc;
        (**(code **)*puVar9)(puVar9);
      }
      param_1[1] = puVar8;
    }
  }
  return;
}


