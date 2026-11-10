/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c850; name: FUN_0069c850
 */


undefined8 FUN_0069c850(undefined8 param_1,float param_2,long param_3,long *param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined8 local_68;
  
  fVar7 = 0.0;
  while( true ) {
    if (param_2 <= fVar7) {
      return 0;
    }
    if ((ulong)(*(long *)(param_3 + 0x1d8) - *(long *)(param_3 + 0x1d0) >> 3) <=
        (ulong)*(uint *)(param_5 + 4)) break;
    local_68 = FUN_006b5180(*(undefined8 *)
                             (*(long *)(param_3 + 0x1d0) + (ulong)*(uint *)(param_5 + 4) * 8));
    plVar2 = (long *)FUN_006b92e0(&local_68);
    lVar5 = *plVar2;
    lVar3 = plVar2[3];
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (lVar5 == *param_4) {
      bVar4 = false;
    }
    else {
      puVar1 = *(undefined8 **)(param_3 + 0x1d8);
      for (puVar6 = *(undefined8 **)(param_3 + 0x1d0); puVar6 != puVar1; puVar6 = puVar6 + 1) {
        FUN_006b4fa0(param_1,*puVar6,param_3 + 0x280);
      }
      (**(code **)(**(long **)(param_3 + 0x270) + 0xe8))();
      FUN_006bca40(param_1,*(undefined8 *)(param_3 + 400));
      fVar7 = fVar7 + (float)param_1;
      bVar4 = true;
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if (!bVar4) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


