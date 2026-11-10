/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074f970; name: FUN_0074f970
 */


void FUN_0074f970(long param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((param_3 == 0) && (lVar4 = *(long *)(param_1 + 0x90), lVar4 != 0)) {
    *(undefined1 *)(param_1 + 0x3d0) = 0;
    *(undefined4 *)(param_1 + 0x330) = 0;
    FUN_00751810(param_1 + 0x80,*(undefined8 *)(param_1 + 0x78),lVar4);
    FUN_00751db0(param_1 + 0x80,*(undefined8 *)(param_1 + 0x78),lVar4,*(undefined8 *)(param_1 + 8));
  }
  lVar4 = (long)param_3;
  plVar3 = (long *)(param_1 + (long)param_3 * 0x130 + 0xa8);
  if (*plVar3 == 0) {
    *plVar3 = 0;
  }
  else {
    FUN_006e2100(*plVar3,param_1 + lVar4 * 0x130 + 0xa0);
    lVar1 = *plVar3;
    *plVar3 = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *param_2;
  plVar3 = (long *)(param_1 + lVar4 * 0x130 + 0x98);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *plVar3;
  *plVar3 = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar1 = param_1 + lVar4 * 0x20;
  lVar2 = *(long *)(lVar1 + 0x2f0);
  *(undefined8 *)(lVar1 + 0x2f0) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(lVar1 + 0x2f8) + 0x18))
              (*(long **)(lVar1 + 0x2f8),lVar2,*(undefined8 *)(lVar1 + 0x300),
               *(undefined8 *)(lVar1 + 0x308));
  }
  *(ulong *)(param_1 + lVar4 * 0x130 + 0x90) =
       (long)*(uint **)(*param_2 + 0x58) + (ulong)**(uint **)(*param_2 + 0x58);
  return;
}


