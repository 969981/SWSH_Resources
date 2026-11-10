/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f69b0; name: FUN_004f69b0
 */


void FUN_004f69b0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    uVar3 = *(uint *)(param_1 + 2);
    if (uVar3 != 0) {
      uVar4 = 0;
      lVar2 = *plVar1;
      while( true ) {
        if (lVar2 != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
          uVar3 = *(uint *)(param_1 + 2);
        }
        uVar4 = uVar4 + 1;
        if (uVar3 <= uVar4) break;
        lVar2 = *(long *)(*param_1 + uVar4 * 8);
      }
      plVar1 = (long *)*param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,plVar1);
  }
  plVar1 = (long *)param_1[3];
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (plVar1 != (long *)0x0) {
    uVar3 = *(uint *)(param_1 + 5);
    if (uVar3 != 0) {
      uVar4 = 0;
      lVar2 = *plVar1;
      while( true ) {
        if (lVar2 != 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          *(undefined8 *)(param_1[3] + uVar4 * 8) = 0;
          uVar3 = *(uint *)(param_1 + 5);
        }
        uVar4 = uVar4 + 1;
        if (uVar3 <= uVar4) break;
        lVar2 = *(long *)(param_1[3] + uVar4 * 8);
      }
      plVar1 = (long *)param_1[3];
    }
    (**(code **)(*param_2 + 0x18))(param_2,plVar1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}


