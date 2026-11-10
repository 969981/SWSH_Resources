/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043b440; name: FUN_0043b440
 */


undefined8 FUN_0043b440(undefined8 param_1,long param_2,long *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte *pbVar6;
  
  if ((param_3 != (long *)0x0) && (*(int *)(param_2 + 0x30) != 0)) {
    plVar2 = (long *)FUN_0043e8c0(param_2);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (*(uint *)(param_3 + 1) == 0) {
      lVar3 = 0;
      bVar1 = false;
      plVar4 = plVar2;
      do {
        while (bVar1) {
          bVar1 = true;
          plVar4 = (long *)plVar4[0xf];
          if (plVar4 == (long *)0x0) goto LAB_0043b51c;
        }
        lVar3 = plVar4[0x10];
        bVar1 = lVar3 != 0;
        plVar4 = (long *)plVar4[0xf];
      } while (plVar4 != (long *)0x0);
    }
    else {
      lVar3 = 0;
      bVar1 = false;
      plVar4 = plVar2;
      do {
        while( true ) {
          lVar5 = (ulong)*(uint *)(param_3 + 1) << 3;
          pbVar6 = (byte *)(*param_3 + 4);
          do {
            if (((int)plVar4[2] == *(int *)(pbVar6 + -4)) &&
               ((uint)*pbVar6 == (*(uint *)((long)plVar4 + 0x9c) >> 0x11 & 1))) goto LAB_0043b5a0;
            pbVar6 = pbVar6 + 8;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
          if (!bVar1) break;
          bVar1 = true;
          plVar4 = (long *)plVar4[0xf];
          if (plVar4 == (long *)0x0) goto LAB_0043b51c;
        }
        lVar3 = plVar4[0x10];
        bVar1 = lVar3 != 0;
        plVar4 = (long *)plVar4[0xf];
      } while (plVar4 != (long *)0x0);
    }
LAB_0043b51c:
    if (lVar3 != 0) {
      if (*(uint *)(param_3 + 1) == 0) {
        do {
          lVar3 = *(long *)(lVar3 + 0x80);
        } while (lVar3 != 0);
      }
      else {
        do {
          lVar5 = (ulong)*(uint *)(param_3 + 1) << 3;
          pbVar6 = (byte *)(*param_3 + 4);
          do {
            if ((*(int *)(lVar3 + 0x10) == *(int *)(pbVar6 + -4)) &&
               ((uint)*pbVar6 == (*(uint *)(lVar3 + 0x9c) >> 0x11 & 1))) {
LAB_0043b5a0:
              (**(code **)(*plVar2 + 0x18))();
              return 1;
            }
            pbVar6 = pbVar6 + 8;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
          lVar3 = *(long *)(lVar3 + 0x80);
        } while (lVar3 != 0);
      }
    }
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  return 0;
}


