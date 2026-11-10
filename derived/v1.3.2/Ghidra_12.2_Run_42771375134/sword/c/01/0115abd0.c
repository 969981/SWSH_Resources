/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0115abd0; name: FUN_0115abd0
 */


void FUN_0115abd0(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_38;
  
  if ((*(char *)(param_1 + 0x748) == '\0') || (*(char *)(param_1 + 0x749) != '\x02')) {
    FUN_0077d520(*(undefined8 *)(param_1 + 0x718),param_3);
    local_38 = 0xcf177e9705ae4de5;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0x5d0),&local_38,*(undefined8 *)(param_1 + 0x728));
    FUN_014c9110(*(undefined8 *)(param_1 + 0x710),0,*(undefined8 *)(param_1 + 0x718),
                 *(undefined1 *)(param_3 + 0x1a),*(undefined1 *)(param_3 + 0x1b));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x720),
                 *(undefined8 *)(param_1 + 0x728));
    lVar2 = *(long *)(param_1 + 0x708) + (long)param_2 * 8 + 0x290;
  }
  else {
    FUN_0077d520(*(undefined8 *)(param_1 + 0x718),param_3);
    local_38 = 0xcf177e9705ae4de5;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0x5d0),&local_38,*(undefined8 *)(param_1 + 0x728));
    FUN_014c9110(*(undefined8 *)(param_1 + 0x710),0,*(undefined8 *)(param_1 + 0x718),
                 *(undefined1 *)(param_3 + 0x1a),*(undefined1 *)(param_3 + 0x1b));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x720),
                 *(undefined8 *)(param_1 + 0x728));
    lVar2 = *(long *)(param_1 + 0x708) + (long)param_2 * 8 + 0x2a0;
  }
  uVar1 = FUN_0077d470(*(undefined8 *)(param_1 + 0x720));
  FUN_00ffd700(param_1 + 0x100,lVar2,uVar1,10);
  return;
}


