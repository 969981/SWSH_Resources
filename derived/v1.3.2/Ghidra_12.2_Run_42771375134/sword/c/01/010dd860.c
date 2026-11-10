/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010dd860; name: FUN_010dd860
 */


undefined8 FUN_010dd860(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (*(int *)(param_1 + 0x9c) == 1) {
    uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
    if ((uVar2 & 1) != 0) {
      iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
      if (iVar1 == 2) {
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
      else {
        if (iVar1 == 1) {
          if ((*(long *)(param_1 + 0x68) != 0) &&
             (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60),
             puVar6 != (undefined8 *)0x0)) {
            plVar3 = (long *)(**(code **)*puVar6)(puVar6);
            lVar4 = FUN_010c8950();
            for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
              if (plVar3 == (long *)lVar4) {
                puVar6 = puVar6 + -10;
                uVar5 = 5;
                goto LAB_010dd95c;
              }
            }
          }
          puVar6 = (undefined8 *)0x0;
          uVar5 = 5;
        }
        else {
          if (iVar1 != 0) {
            return 0;
          }
          if ((*(long *)(param_1 + 0x68) != 0) &&
             (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60),
             puVar6 != (undefined8 *)0x0)) {
            plVar3 = (long *)(**(code **)*puVar6)(puVar6);
            lVar4 = FUN_010c8950();
            for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
              if (plVar3 == (long *)lVar4) {
                puVar6 = puVar6 + -10;
                goto LAB_010dd908;
              }
            }
          }
          puVar6 = (undefined8 *)0x0;
LAB_010dd908:
          uVar5 = 4;
        }
LAB_010dd95c:
        FUN_010c6c30(puVar6,uVar5);
        FUN_010d2dc0(*(undefined8 *)(param_1 + 0x88),0);
        *(undefined8 *)(param_1 + 0x98) = 3;
      }
    }
  }
  else if (*(int *)(param_1 + 0x9c) == 0) {
    FUN_010dd9b0(param_1,0x19);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  }
  return 0;
}


