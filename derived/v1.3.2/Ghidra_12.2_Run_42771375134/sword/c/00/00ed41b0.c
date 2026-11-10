/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed41b0; name: FUN_00ed41b0
 */


void FUN_00ed41b0(long param_1,long param_2)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*(long *)(param_1 + 0x140) == 0) || (*(long *)(param_1 + 0x148) != param_2)) {
    if (*(long *)(param_1 + 0x178) == 0) goto LAB_00ed432c;
LAB_00ed41f4:
    if (*(long *)(param_1 + 0x180) != param_2) goto LAB_00ed432c;
    if (6 < (ulong)*(byte *)(param_1 + 0x170)) goto LAB_00ed468c;
    lVar1 = *(long *)PTR_DAT_0271f740 + (ulong)*(byte *)(param_1 + 0x170) * 0x20;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_008d4290(&local_50);
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x198) = local_50;
    *(undefined8 *)(param_1 + 0x1a0) = uStack_48;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    if (*(long *)(param_1 + 0x1b0) != 0) goto LAB_00ed4334;
LAB_00ed4340:
    if (*(long *)(param_1 + 0x1e8) == 0) goto LAB_00ed4480;
LAB_00ed4348:
    if (*(long *)(param_1 + 0x1f0) != param_2) goto LAB_00ed4480;
    if (6 < (ulong)*(byte *)(param_1 + 0x1e0)) goto LAB_00ed468c;
    lVar1 = *(long *)PTR_DAT_0271f740 + (ulong)*(byte *)(param_1 + 0x1e0) * 0x20;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_008d4290(&local_50);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x208) = local_50;
    *(undefined8 *)(param_1 + 0x210) = uStack_48;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    if (*(long *)(param_1 + 0x220) != 0) goto LAB_00ed4488;
LAB_00ed4494:
    if (*(long *)(param_1 + 600) == 0) goto LAB_00ed45d4;
LAB_00ed449c:
    if (*(long *)(param_1 + 0x260) != param_2) goto LAB_00ed45d4;
    if (6 < (ulong)*(byte *)(param_1 + 0x250)) goto LAB_00ed468c;
    lVar1 = *(long *)PTR_DAT_0271f740 + (ulong)*(byte *)(param_1 + 0x250) * 0x20;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_008d4290(&local_50);
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x278) = local_50;
    *(undefined8 *)(param_1 + 0x280) = uStack_48;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    lVar1 = *(long *)(param_1 + 0x290);
  }
  else {
    if (6 < (ulong)*(byte *)(param_1 + 0x138)) goto LAB_00ed468c;
    lVar1 = *(long *)PTR_DAT_0271f740 + (ulong)*(byte *)(param_1 + 0x138) * 0x20;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_008d4290(&local_50);
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x160) = local_50;
    *(undefined8 *)(param_1 + 0x168) = uStack_48;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    if (*(long *)(param_1 + 0x178) != 0) goto LAB_00ed41f4;
LAB_00ed432c:
    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_00ed4340;
LAB_00ed4334:
    if (*(long *)(param_1 + 0x1b8) != param_2) goto LAB_00ed4340;
    if (6 < (ulong)*(byte *)(param_1 + 0x1a8)) goto LAB_00ed468c;
    lVar1 = *(long *)PTR_DAT_0271f740 + (ulong)*(byte *)(param_1 + 0x1a8) * 0x20;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_008d4290(&local_50);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = local_50;
    *(undefined8 *)(param_1 + 0x1d8) = uStack_48;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (*(long *)(param_1 + 0x1e8) != 0) goto LAB_00ed4348;
LAB_00ed4480:
    if (*(long *)(param_1 + 0x220) == 0) goto LAB_00ed4494;
LAB_00ed4488:
    if (*(long *)(param_1 + 0x228) != param_2) goto LAB_00ed4494;
    if (6 < (ulong)*(byte *)(param_1 + 0x218)) goto LAB_00ed468c;
    lVar1 = *(long *)PTR_DAT_0271f740 + (ulong)*(byte *)(param_1 + 0x218) * 0x20;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_008d4290(&local_50);
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x240) = local_50;
    *(undefined8 *)(param_1 + 0x248) = uStack_48;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (*(long *)(param_1 + 600) != 0) goto LAB_00ed449c;
LAB_00ed45d4:
    lVar1 = *(long *)(param_1 + 0x290);
  }
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x298) == param_2)) {
    if (6 < (ulong)*(byte *)(param_1 + 0x288)) {
LAB_00ed468c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar1 = *(long *)PTR_DAT_0271f740 + (ulong)*(byte *)(param_1 + 0x288) * 0x20;
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
    (**(code **)(**(long **)(lVar1 + 0x10) + 0x18))
              (*(long **)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
               8);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_008d4290(&local_50);
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = local_50;
    *(undefined8 *)(param_1 + 0x2b8) = uStack_48;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  return;
}


