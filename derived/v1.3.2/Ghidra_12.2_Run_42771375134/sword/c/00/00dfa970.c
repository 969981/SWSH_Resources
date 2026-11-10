/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfa970; name: FUN_00dfa970
 */


void FUN_00dfa970(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x50) + 0x54) == 0) {
    return;
  }
  uVar3 = 0xcbf29ce484222645;
  FUN_00a658b0(&local_28);
  *(undefined8 *)(local_28 + 0x668) = *(undefined8 *)(param_1 + 0x80);
  lVar2 = *(long *)(param_1 + 0xa0);
  if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x290) == '\0')) || (*(char *)(lVar2 + 0x291) == '\0'))
     || (iVar1 = *(int *)(lVar2 + 0x2d8), iVar1 < 1)) {
    *(undefined8 *)(local_28 + 0x670) = 0xcbf29ce484222645;
LAB_00dfaa78:
    *(undefined8 *)(local_28 + 0x678) = 0xcbf29ce484222645;
LAB_00dfaa7c:
    *(undefined8 *)(local_28 + 0x680) = 0xcbf29ce484222645;
LAB_00dfaa80:
    *(undefined8 *)(local_28 + 0x688) = 0xcbf29ce484222645;
LAB_00dfaa84:
    *(undefined8 *)(local_28 + 0x690) = 0xcbf29ce484222645;
LAB_00dfaa88:
    *(undefined8 *)(local_28 + 0x698) = 0xcbf29ce484222645;
  }
  else {
    *(undefined8 *)(local_28 + 0x670) = *(undefined8 *)(lVar2 + 0x298);
    if (iVar1 == 1) goto LAB_00dfaa78;
    *(undefined8 *)(local_28 + 0x678) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x2a0);
    if (iVar1 < 3) goto LAB_00dfaa7c;
    *(undefined8 *)(local_28 + 0x680) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x2a8);
    if (iVar1 == 3) goto LAB_00dfaa80;
    *(undefined8 *)(local_28 + 0x688) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x2b0);
    if (iVar1 < 5) goto LAB_00dfaa84;
    *(undefined8 *)(local_28 + 0x690) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x2b8);
    if (iVar1 == 5) goto LAB_00dfaa88;
    *(undefined8 *)(local_28 + 0x698) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x2c0);
    if (6 < iVar1) {
      *(undefined8 *)(local_28 + 0x6a0) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x2c8);
      if (iVar1 != 7) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x2d0);
      }
      goto LAB_00dfaa90;
    }
  }
  *(undefined8 *)(local_28 + 0x6a0) = 0xcbf29ce484222645;
LAB_00dfaa90:
  *(undefined8 *)(local_28 + 0x6a8) = uVar3;
  (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  return;
}


