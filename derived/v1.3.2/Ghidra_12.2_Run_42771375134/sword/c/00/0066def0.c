/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066def0; name: FUN_0066def0
 */


void FUN_0066def0(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if ((param_1 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x50))();
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        while( true ) {
          lVar5 = *param_2;
          lVar1 = lVar5 + lVar4;
          if ((*(byte *)(lVar1 + 0x58) & 1) == 0) break;
          if ((*(byte *)(lVar1 + 0x28) & 1) == 0) goto LAB_0066dfa8;
LAB_0066df64:
          lVar2 = lVar2 + -1;
          lVar4 = lVar4 + 0x60;
          if (lVar2 == 0) goto LAB_0066dfe0;
        }
        if (*(long *)(lVar1 + 0x38) != 0) {
          plVar3 = *(long **)(lVar1 + 0x30);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,*(long *)(lVar1 + 0x38),
                       "../../../../Include\\SiCore/SiCore_String.inl",0xe1);
          }
          *(undefined8 *)(lVar1 + 0x38) = 0;
        }
        *(undefined8 *)(lVar1 + 0x38) = 0;
        if ((*(byte *)(lVar1 + 0x28) & 1) != 0) goto LAB_0066df64;
LAB_0066dfa8:
        if (*(long *)(lVar1 + 8) != 0) {
          plVar3 = *(long **)(lVar5 + lVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x48))
                      (plVar3,*(long *)(lVar1 + 8),"../../../../Include\\SiCore/SiCore_String.inl",
                       0xe1);
          }
          *(undefined8 *)(lVar1 + 8) = 0;
        }
        *(undefined8 *)(lVar1 + 8) = 0;
        lVar2 = lVar2 + -1;
        lVar4 = lVar4 + 0x60;
      } while (lVar2 != 0);
    }
LAB_0066dfe0:
    (**(code **)(*param_1 + 0x48))(param_1,*param_2,param_3,param_4);
    *param_2 = 0;
  }
  return;
}


