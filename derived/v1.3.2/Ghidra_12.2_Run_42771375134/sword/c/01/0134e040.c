/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0134e040; name: FUN_0134e040
 */


undefined8 FUN_0134e040(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = FUN_012de5b0();
  if (lVar4 == 0) {
    return 0;
  }
  local_50 = 0x4b9cb8272bcb3f9;
  pcStack_48 = "unit_obj_tent01_cloth01_01_01_bld";
  local_40 = 0x21;
  local_38 = 0;
  iVar3 = FUN_0072c700(lVar4 + 0x210,&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0x218) + 0x290) + (long)iVar3 * 0x4c0;
  plVar7 = *(long **)(lVar5 + 0xd8);
  plVar6 = *(long **)(lVar5 + 0xe0);
  plVar9 = plVar7;
  if (plVar7 == plVar6) {
    plVar8 = plVar6;
  }
  else {
    plVar8 = plVar7;
    if (*plVar7 != 0x15083c3ab707041d) {
      do {
        plVar8 = plVar8 + 4;
        if (plVar6 == plVar8) {
          plVar8 = plVar6;
          plVar9 = plVar6;
          goto LAB_0134e130;
        }
      } while (*plVar8 != 0x15083c3ab707041d);
      plVar9 = plVar8;
    }
  }
LAB_0134e130:
  if ((ulong)(long)iVar3 <
      (ulong)((*(long *)(lVar4 + 0x328) - *(long *)(lVar4 + 800) >> 3) * -0x70a3d70a3d70a3d7)) {
    lVar4 = *(long *)(lVar4 + 800) + (long)iVar3 * 200;
    uVar10 = *param_2;
    lVar5 = *(long *)(lVar4 + 0x80);
    uVar1 = ((long)plVar9 - (long)plVar7) * 0x8000000 >> 0x20;
    if (plVar8 == plVar6) {
      uVar1 = 0xffffffffffffffff;
    }
    if (uVar1 < (ulong)(*(long *)(lVar4 + 0x88) - lVar5 >> 4)) {
      puVar2 = (undefined8 *)(lVar5 + uVar1 * 0x10);
      puVar2[1] = param_2[1];
      *puVar2 = uVar10;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


