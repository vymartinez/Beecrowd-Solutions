SELECT empregados.cpf, empregados.enome, departamentos.dnome FROM empregados JOIN departamentos ON departamentos.dnumero = empregados.dnumero WHERE empregados.cpf_supervisor is null ORDER BY empregados.cpf;