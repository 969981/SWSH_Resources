/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b3610; name: FUN_003b3610
 */


ulong FUN_003b3610(undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 local_44;
  long local_40;
  ulong local_38;
  
  uVar2 = (**(code **)(*(long *)*param_1 + 0x18))();
  uVar10 = uVar2 & 0xffffffff;
  uVar9 = (uint)uVar2;
  if (param_3 < uVar9) {
    uVar10 = 0;
  }
  else {
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    FUN_001ed3f0(&local_40,uVar10,&local_44);
                    /* try { // try from 003b3694 to 003b36b7 has its CatchHandler @ 003b3784 */
    (**(code **)(**(long **)(*(long *)PTR_DAT_02711060 + 0x10) + 0x30))
              (*(long **)(*(long *)PTR_DAT_02711060 + 0x10),*param_1,local_40,
               local_40 + (local_38 & 0xffffffff) * 4,0,0,0,0,0,0,0,0,0,0,0,0);
    lVar1 = local_40;
    if (uVar9 != 0) {
      lVar4 = param_1[2];
      if (uVar9 == 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar6 = (undefined4 *)(local_40 + 4);
        puVar7 = (undefined4 *)(lVar4 + 4);
        puVar8 = (undefined4 *)(param_2 + 8);
        do {
          puVar8[-1] = puVar6[-1];
          puVar8[-2] = puVar7[-1];
          puVar8[1] = *puVar6;
          lVar5 = lVar5 + 2;
          *puVar8 = *puVar7;
          puVar6 = puVar6 + 2;
          puVar7 = puVar7 + 2;
          puVar8 = puVar8 + 4;
        } while ((uVar2 & 0xffffffff) - (uVar2 & 1) != lVar5);
      }
      if ((uVar2 & 1) != 0) {
        puVar6 = (undefined4 *)(param_2 + lVar5 * 8);
        puVar6[1] = *(undefined4 *)(local_40 + lVar5 * 4);
        *puVar6 = *(undefined4 *)(lVar4 + lVar5 * 4);
      }
    }
    if (((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) && (local_40 != 0)) {
                    /* try { // try from 003b3754 to 003b3767 has its CatchHandler @ 003b3780 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
    }
  }
  return uVar10;
}


