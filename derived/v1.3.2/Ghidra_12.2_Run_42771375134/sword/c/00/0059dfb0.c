/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059dfb0; name: FUN_0059dfb0
 */


int FUN_0059dfb0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined1 *in_x5;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long *local_38;
  
  if (in_x5 != (undefined1 *)0x0) {
    *in_x5 = 0;
  }
  puVar1 = PTR_DAT_02713a70;
  if ((*(int *)(param_1 + 0x2c) < 0) ||
     (puVar6 = (uint *)**(undefined8 **)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xe0),
     puVar6 == (uint *)0x0)) {
    if (in_x5 != (undefined1 *)0x0) {
      *in_x5 = 0;
    }
    plVar3 = *(long **)PTR_DAT_02713a70;
    if (plVar3 == (long *)0x0) {
      return -6;
    }
    (**(code **)(*plVar3 + 0xb8))(plVar3,0,&local_38);
    (**(code **)(*local_38 + 8))();
  }
  else {
    uVar4 = *puVar6;
    if (uVar4 != 0) {
      if (in_x5 == (undefined1 *)0x0) {
        uVar5 = 0;
        do {
          while (plVar3 = *(long **)puVar1, plVar3 == (long *)0x0) {
            iVar2 = -6;
            uVar5 = uVar5 + 1;
            if (uVar4 <= uVar5) goto LAB_0059e110;
          }
          (**(code **)(*plVar3 + 0xb8))(plVar3,0,&local_38);
          (**(code **)(*local_38 + 8))();
          uVar4 = *puVar6;
          iVar2 = 0;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
      else {
        uVar4 = 0;
        do {
          while( true ) {
            *in_x5 = 0;
            plVar3 = *(long **)puVar1;
            if (plVar3 == (long *)0x0) break;
            (**(code **)(*plVar3 + 0xb8))(plVar3,0,&local_38);
            (**(code **)(*local_38 + 8))();
            iVar2 = 0;
            uVar4 = uVar4 + 1;
            if (*puVar6 <= uVar4) goto LAB_0059e110;
          }
          iVar2 = -6;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *puVar6);
      }
LAB_0059e110:
      if (iVar2 < 0) {
        return iVar2;
      }
    }
  }
  return 0;
}


