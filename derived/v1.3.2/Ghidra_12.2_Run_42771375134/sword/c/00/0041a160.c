/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041a160; name: FUN_0041a160
 */


void FUN_0041a160(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x250))();
  if (uVar1 == 0) {
    return;
  }
  uVar5 = 0;
  do {
    while ((lVar3 = FUN_0040e520(*(undefined8 *)(param_1 + 0x78),uVar5), *(int *)(lVar3 + 0xf4) != 3
           || (lVar3 = FUN_0041dee0(param_1,lVar3), lVar3 == 0))) {
LAB_0041a1fc:
      uVar5 = uVar5 + 1;
      if (uVar1 == uVar5) {
        return;
      }
    }
    puVar4 = *(undefined4 **)(*(long *)(lVar3 + 0x10) + 0x100);
    if ((puVar4 != (undefined4 *)0x0) && (iVar2 = FUN_004b79b0(lVar3,*puVar4,puVar4[2]), iVar2 == 1)
       ) {
      FUN_0041e1d0(lVar3);
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      *(long *)(lVar3 + 0x30) = *(long *)(param_1 + 0x88);
      *(long *)(param_1 + 0x88) = lVar3;
      goto LAB_0041a1fc;
    }
    *(long *)(param_1 + 0x88) = lVar3;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    uVar5 = uVar5 + 1;
    if (uVar1 == uVar5) {
      return;
    }
  } while( true );
}


