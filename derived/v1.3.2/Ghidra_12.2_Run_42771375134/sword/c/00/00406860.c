/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00406860; name: FUN_00406860
 */


void FUN_00406860(undefined4 param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                 uint param_6)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_02712ad0;
  plVar4 = *(long **)(PTR_DAT_02712ab8 + 8);
  if (plVar4 != (long *)0x0) {
    local_54 = param_1;
    if (param_4 == 0) {
      do {
        while( true ) {
          plVar5 = (long *)plVar4[0xe];
          lVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4);
          if ((lVar3 == param_3) &&
             (((param_5 == 0 || (*(int *)(plVar4[0xc] + 0x2c) == param_5)) &&
              (iVar2 = (**(code **)(*plVar4 + 0xd8))(plVar4,&local_54,param_6 & 1), iVar2 == 1))))
          break;
          plVar4 = plVar5;
          if (plVar5 == (long *)0x0) {
            return;
          }
        }
        FUN_0048f220(*(undefined8 *)puVar1,*(undefined4 *)(plVar4[0xc] + 0x2c));
        plVar4 = plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          plVar5 = (long *)plVar4[0xe];
          lVar3 = (**(code **)(*plVar4 + 0xb0))(plVar4);
          if ((((lVar3 == param_3) && (*(long *)(plVar4[0xc] + 0x30) == param_4)) &&
              ((param_5 == 0 || (*(int *)(plVar4[0xc] + 0x2c) == param_5)))) &&
             (iVar2 = (**(code **)(*plVar4 + 0xd8))(plVar4,&local_54,param_6 & 1), iVar2 == 1))
          break;
          plVar4 = plVar5;
          if (plVar5 == (long *)0x0) {
            return;
          }
        }
        FUN_0048f220(*(undefined8 *)puVar1,*(undefined4 *)(plVar4[0xc] + 0x2c));
        plVar4 = plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return;
}


