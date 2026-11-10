/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aaf60; name: FUN_008aaf60
 */


void FUN_008aaf60(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar2 & 1) != 0) {
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
    if (iVar1 == 0) {
      uVar5 = 0x70000000c;
    }
    else {
      uVar5 = *(undefined8 *)PTR_DAT_027179e0;
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 != (undefined8 *)0x0))
      {
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        lVar4 = FUN_00897d00();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) {
            puVar6 = puVar6 + -10;
            goto LAB_008aafd8;
          }
        }
      }
      puVar6 = (undefined8 *)0x0;
LAB_008aafd8:
      FUN_008a6b70(puVar6,uVar5,0,0);
      uVar5 = 2;
    }
    *(undefined8 *)(param_1 + 0x7c) = uVar5;
  }
  return;
}


