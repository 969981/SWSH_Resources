/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043bac0; name: FUN_0043bac0
 */


void FUN_0043bac0(long param_1,long *param_2,long param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        lVar6 = plVar5[2];
        lVar4 = *(long *)(lVar6 + 8);
        plVar1 = (long *)FUN_0043e8c0(lVar4);
        if ((((param_3 == 0) || (*(long *)(lVar6 + 0x40) == param_3)) &&
            ((param_5 == 0 || (*(int *)(lVar6 + 0x30) == param_5)))) &&
           (*(short *)(lVar4 + 0x34) == 0x503)) {
          FUN_00441dc0(lVar4);
        }
        plVar5 = (long *)*plVar5;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          lVar6 = plVar5[2];
          lVar4 = *(long *)(lVar6 + 8);
          plVar1 = (long *)FUN_0043e8c0(lVar4);
          if (plVar1 == (long *)0x0) break;
          if (plVar1 != param_2) {
            plVar2 = (long *)plVar1[0x10];
            for (plVar3 = (long *)plVar1[0xf]; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[0xf])
            {
              while( true ) {
                if (plVar3 == param_2) goto LAB_0043bb54;
                if (plVar2 == (long *)0x0) break;
                plVar3 = (long *)plVar3[0xf];
                if (plVar3 == (long *)0x0) goto joined_r0x0043bb3c;
              }
              plVar2 = (long *)plVar3[0x10];
            }
joined_r0x0043bb3c:
            do {
              if (plVar2 == (long *)0x0) goto LAB_0043bb88;
              if (plVar2 == param_2) break;
              plVar2 = (long *)plVar2[0x10];
            } while( true );
          }
LAB_0043bb54:
          if (((param_3 == 0) || (*(long *)(lVar6 + 0x40) == param_3)) &&
             (((param_5 == 0 || (*(int *)(lVar6 + 0x30) == param_5)) &&
              (*(short *)(lVar4 + 0x34) == 0x503)))) {
            FUN_00441dc0(lVar4);
          }
LAB_0043bb88:
          plVar5 = (long *)*plVar5;
          (**(code **)(*plVar1 + 0x18))(plVar1);
          if (plVar5 == (long *)0x0) {
            return;
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return;
}


