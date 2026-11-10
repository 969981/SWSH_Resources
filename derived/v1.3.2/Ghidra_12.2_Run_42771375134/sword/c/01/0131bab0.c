/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131bab0; name: FUN_0131bab0
 */


undefined4 FUN_0131bab0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  char *__s1;
  undefined4 uVar5;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0)) {
    FUN_006b91e0(&local_38,0);
  }
  else {
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60), puVar4 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00c781c0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto LAB_0131bb1c;
        }
      }
    }
    puVar4 = (undefined8 *)0x0;
LAB_0131bb1c:
    local_38 = FUN_0069d2b0(puVar4);
  }
  lVar3 = FUN_006b92e0(&local_38);
  __s1 = *(char **)(lVar3 + 8);
  lVar3 = *(long *)(lVar3 + 0x18);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  iVar1 = strncmp(__s1,"ba",2);
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
    iVar1 = strncmp(__s1,"kw",2);
    if (iVar1 != 0) {
      iVar1 = strncmp(__s1,"fi",2);
      if (((iVar1 == 0) || (iVar1 = strncmp(__s1,"wait_turn",9), iVar1 == 0)) ||
         (iVar1 = strncmp(__s1,"walk_turn",9), iVar1 == 0)) {
        uVar5 = 3;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 8);
      }
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar5;
}


