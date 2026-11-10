/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01252cb0; name: FUN_01252cb0
 */


long * FUN_01252cb0(undefined8 *param_1,long *param_2,long *param_3,long *param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = param_1 + 1;
  if (plVar4 != param_2) {
    bVar1 = *param_5;
    if (*(byte *)((long)param_2 + 0x1c) <= bVar1) {
      if (bVar1 <= *(byte *)((long)param_2 + 0x1c)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar5 = (long *)param_2[1];
      if (plVar5 == (long *)0x0) {
        plVar5 = param_2 + 2;
        plVar6 = (long *)*plVar5;
        if ((long *)*plVar6 != param_2) {
          do {
            lVar8 = *plVar5;
            plVar5 = (long *)(lVar8 + 0x10);
            plVar6 = (long *)*plVar5;
          } while (*plVar6 != lVar8);
        }
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
      if ((plVar6 == plVar4) || (bVar1 < *(byte *)((long)plVar6 + 0x1c))) {
        if (param_2[1] == 0) {
          *param_3 = (long)param_2;
          return param_2 + 1;
        }
LAB_01252e18:
        *param_3 = (long)plVar6;
        return plVar6;
      }
      plVar6 = (long *)*plVar4;
      if (plVar6 != (long *)0x0) {
        plVar4 = param_1 + 1;
        bVar2 = *(byte *)((long)plVar6 + 0x1c);
        do {
          if (bVar1 < bVar2) {
            plVar5 = (long *)*plVar6;
            if (plVar5 == (long *)0x0) goto LAB_01252e18;
            plVar4 = plVar6;
          }
          else {
            if (bVar1 <= bVar2) {
LAB_01252e74:
              *param_3 = (long)plVar6;
              return plVar4;
            }
            plVar4 = plVar6 + 1;
            plVar5 = (long *)*plVar4;
            if (plVar5 == (long *)0x0) goto LAB_01252e74;
          }
          bVar2 = *(byte *)((long)plVar5 + 0x1c);
          plVar6 = plVar5;
        } while( true );
      }
      goto LAB_01252e80;
    }
  }
  plVar6 = (long *)*param_2;
  plVar5 = param_2;
  if ((long *)*param_1 != param_2) {
    if (plVar6 == (long *)0x0) {
      plVar7 = param_2;
      do {
        plVar5 = (long *)plVar7[2];
        bVar3 = (long *)*plVar5 == plVar7;
        plVar7 = plVar5;
      } while (bVar3);
    }
    else {
      plVar7 = plVar6;
      do {
        plVar5 = plVar7;
        plVar7 = (long *)plVar5[1];
      } while ((long *)plVar5[1] != (long *)0x0);
    }
    bVar1 = *param_5;
    if (bVar1 <= *(byte *)((long)plVar5 + 0x1c)) {
      plVar6 = (long *)*plVar4;
      if (plVar6 != (long *)0x0) {
        plVar4 = param_1 + 1;
        bVar2 = *(byte *)((long)plVar6 + 0x1c);
        do {
          if (bVar1 < bVar2) {
            plVar5 = (long *)*plVar6;
            if (plVar5 == (long *)0x0) goto LAB_01252e18;
            plVar4 = plVar6;
          }
          else {
            if (bVar1 <= bVar2) {
LAB_01252da8:
              *param_3 = (long)plVar6;
              return plVar4;
            }
            plVar4 = plVar6 + 1;
            plVar5 = (long *)*plVar4;
            if (plVar5 == (long *)0x0) goto LAB_01252da8;
          }
          bVar2 = *(byte *)((long)plVar5 + 0x1c);
          plVar6 = plVar5;
        } while( true );
      }
LAB_01252e80:
      *param_3 = (long)plVar4;
      return plVar4;
    }
  }
  if (plVar6 == (long *)0x0) {
    *param_3 = (long)param_2;
    return param_2;
  }
  *param_3 = (long)plVar5;
  return plVar5 + 1;
}


